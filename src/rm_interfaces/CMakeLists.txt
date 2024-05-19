cmake_minimum_required(VERSION 3.8)
project(rm_interfaces)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(actionlib_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(actionlib REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/TwistAccel.msg"
  "msg/GimbalAngle.msg"
  "msg/GimbalRate.msg"
  "msg/ObstacleMsg.msg"
  "msg/ShootInfo.msg"
  "msg/ShootState.msg"
  "msg/BulletMove.msg"
  "msg/BulletsInfo.msg"
  "msg/Position.msg"
  "msg/RobotPosition.msg"
  "msg/BattlePosition.msg"
  "msg/JudgeSysShootHit.msg"
  "msg/MovePoint.msg"
  "msg/BasicExecutorStatus.msg"
  "msg/BonusStatus.msg"
  "msg/GameResult.msg"
  "msg/GameStatus.msg"
  "msg/GameSurvivor.msg"
  "msg/ProjectileSupply.msg"
  "msg/RobotBonus.msg"
  "msg/RobotDamage.msg"
  "msg/RobotHeat.msg"
  "msg/RobotShoot.msg"
  "msg/RobotStatus.msg"
  "msg/SupplierStatus.msg"
  "msg/Buffinfo.msg"

  "action/LocalPlanner.action"
  "action/GlobalPlanner.action"
  "action/ArmorDetection.action"
  
  "srv/GimbalMode.srv"
  "srv/FricWhl.srv"
  "srv/ShootCmd.srv"
  "srv/JudgeSysControl.srv"
  "srv/GimbalAim.srv"
  "srv/BasicExecutor.srv"
  

  DEPENDENCIES
    std_msgs
    geometry_msgs
    actionlib_msgs
    nav_msgs
    
)


  

 

ament_package()