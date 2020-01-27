#include "judgesys_robot.h"
#include <string>


namespace hero_judgesys{
using hero_common::ErrorCode;
using hero_common::ErrorInfo;


JudgesysRobot::JudgesysRobot(std::string robot_num, std::string color):
new_cmd_acc_(false), 
begin_(false),
is_forbidden_to_move_(false),
is_alive_(true){
   if (Init(robot_num,color).IsOK()) {
    ROS_INFO("%s robot:%s initialization completed.",color.c_str(),robot_num.c_str());
  } else {
    ROS_ERROR("%s robot:%s Initialization failed.",color.c_str(),robot_num.c_str());
  }
}

ErrorInfo JudgesysRobot::Init(std::string robot_num, std::string color){
	if(color != "red" && color != "blue")
	{
		ROS_ERROR("robot color can only be red or blue.");
		return ErrorInfo(ErrorCode::GP_INITILIZATION_ERROR,
						"robot color can only be red or blue.");
	}
	color_ = color;
	robot_num_ = robot_num;
    health_ = hero_judgesys::JudgesysControl::MaxHealth;
	heat_ = 0;
    ammo_ = 0;
	ros::NodeHandle nh_;
    judgeVel_pub_ = nh_.advertise<geometry_msgs::Twist>(robot_num + "/" + "cmd_vel", 5);
    judgeStatus_pub_ = nh_.advertise<hero_msgs::RobotStatus>("judgeSysInfo/" + robot_num + "/status",5);
    judgeHeat_pub_ = nh_.advertise<hero_msgs::RobotHeat>("judgeSysInfo/" + robot_num + "/heat_power",5);
    judge_sub_ = nh_.subscribe<geometry_msgs::Twist>	(robot_num + "/" + "cmd_vel_raw", 100, &JudgesysRobot::RawVelCallback,this);
	return ErrorInfo(ErrorCode::OK);
}

void JudgesysRobot::RawVelCallback(const geometry_msgs::Twist::ConstPtr& msg)
{
	if (!begin_) {
    begin_ = true;
		ROS_INFO("%s robot:%s raw cmd vel received!",color_.c_str(),robot_num_.c_str());
  }
	new_cmd_acc_ = true;
	raw_cmd_vel_ = *msg;
}

void JudgesysRobot::BuffReload()
{
    ammo_ += JudgesysControl::ReloadAmmo;
}

void JudgesysRobot::Revive()
{
    health_ = JudgesysControl::MaxHealth;
}
void JudgesysRobot::PublishVel()
{
	if(!begin_)
		return;
	if(health_<0)
	{
		health_ = 0;
	}
	is_alive_ = health_ > 0;
	if(is_forbidden_to_move_||!is_alive_)
	{
		output_cmd_vel_.linear.x = 0;
		output_cmd_vel_.linear.y = 0;
		output_cmd_vel_.angular.z = 0;
	}
	else
	{
		output_cmd_vel_.linear.x = raw_cmd_vel_.linear.x;
		output_cmd_vel_.linear.y = raw_cmd_vel_.linear.y;
		output_cmd_vel_.angular.z = raw_cmd_vel_.angular.z;
	}
    judgeVel_pub_.publish(output_cmd_vel_);
}

void JudgesysRobot::PublishInfo()
{
    roboStatus_.max_hp = JudgesysControl::MaxHealth;
    roboStatus_.remain_hp = health_;
    roboStatus_.heat_cooling_limit = cooling_rate_;
    roboStatus_.remain_ammo = ammo_;
    roboHeat_.shooter_heat = heat_;

    judgeStatus_pub_.publish(roboStatus_);
    judgeHeat_pub_.publish(roboHeat_);
}



}


