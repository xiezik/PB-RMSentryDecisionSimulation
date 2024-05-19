#ifndef __JUDGESYS_ROBOT_H
#define __JUDGESYS_ROBOT_H

#include <string>
#include "geometry_msgs/msg/twist.hpp"

#include "rm_judgesys/error_code.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rm_judgesys/judgesys_control_node.hpp"
#include "rm_interfaces/msg/robot_status.hpp"
#include "rm_interfaces/msg/robot_heat.hpp"
#include "rm_state/command_code.hpp"

namespace rm_judgesys{

    class JudgesysControl;
    
    class JudgesysRobot{
        public:
        JudgesysRobot(std::string robot_num, std::string color);
        ~JudgesysRobot() = default;

        std::string GetColor()
        {return color_;}

         std::string GetName()
        {return robot_num_;}

        int GetHealth()
        {return health_;}

        int GetHeat()
        {return heat_;}
        
        bool IsAlive()
        {return is_alive_;}
        
        bool IsBegin()
        {return begin_;}
        
        int GetAmmo()
        {return ammo_;}

        void RawVelCallback(const geometry_msgs::Twist::ConstPtr& msg);
        void RawVelCallback_act(const geometry_msgs::Twist::ConstPtr& msg);

        void PublishVel();
        void PublishInfo();
        
        void Shoot(int num, float speed);


        void BeHit(rm_common::JudgeSysCommand command);

        void DebuffMove();

        void DebuffShoot();

        void BuffReload();

        void BuffHeal();

        void Kill(){health_=0;}

        void Revive();

        void Reload()
        {
            ammo_+=50;
            if(ammo_>400)
                ammo_=400;
        }

        void Disarm()
        {ammo_ = 0;}

        void BuffAndDebuff(int fre);

        void Cool(int fre);

        void Reset();


        private:
        rm_common::ErrorInfo Init(std::string robot_num, std::string color);

        std::string color_;
        std::string robot_num_;

        int health_;
        float heat_;
        int cooling_rate_;
        int heat_cooling_limit_;
        int ammo_;
        bool is_alive_;

        bool is_forbidden_to_move_;
        bool is_forbidden_to_shoot_;

        rclcpp::Publisher judgeVel_pub_;
        rclcpp::Publisher judgeStatus_pub_;
        rclcpp::Publisher judgeHeat_pub_;
        rclcpp::Subscriber judge_sub_[2];
        int raw_cmd_selector_count;

        rm_interfaces::RobotStatus roboStatus_;
        rm_interfaces::RobotHeat roboHeat_;

        geometry_msgs::msg::Twist raw_cmd_vel_;
        geometry_msgs::msg::Twist output_cmd_vel_;

        bool new_cmd_acc_;
        bool begin_;

        float move_debuff_time_;
        float shoot_debuff_time_;


    };

}



#endif

