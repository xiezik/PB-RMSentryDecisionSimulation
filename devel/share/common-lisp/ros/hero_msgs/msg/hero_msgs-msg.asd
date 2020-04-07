
(cl:in-package :asdf)

(defsystem "hero_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :actionlib_msgs-msg
               :geometry_msgs-msg
               :nav_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "ArmorDetectionAction" :depends-on ("_package_ArmorDetectionAction"))
    (:file "_package_ArmorDetectionAction" :depends-on ("_package"))
    (:file "ArmorDetectionActionFeedback" :depends-on ("_package_ArmorDetectionActionFeedback"))
    (:file "_package_ArmorDetectionActionFeedback" :depends-on ("_package"))
    (:file "ArmorDetectionActionGoal" :depends-on ("_package_ArmorDetectionActionGoal"))
    (:file "_package_ArmorDetectionActionGoal" :depends-on ("_package"))
    (:file "ArmorDetectionActionResult" :depends-on ("_package_ArmorDetectionActionResult"))
    (:file "_package_ArmorDetectionActionResult" :depends-on ("_package"))
    (:file "ArmorDetectionFeedback" :depends-on ("_package_ArmorDetectionFeedback"))
    (:file "_package_ArmorDetectionFeedback" :depends-on ("_package"))
    (:file "ArmorDetectionGoal" :depends-on ("_package_ArmorDetectionGoal"))
    (:file "_package_ArmorDetectionGoal" :depends-on ("_package"))
    (:file "ArmorDetectionResult" :depends-on ("_package_ArmorDetectionResult"))
    (:file "_package_ArmorDetectionResult" :depends-on ("_package"))
    (:file "BasicExecutorStatus" :depends-on ("_package_BasicExecutorStatus"))
    (:file "_package_BasicExecutorStatus" :depends-on ("_package"))
    (:file "BattlePosition" :depends-on ("_package_BattlePosition"))
    (:file "_package_BattlePosition" :depends-on ("_package"))
    (:file "BonusStatus" :depends-on ("_package_BonusStatus"))
    (:file "_package_BonusStatus" :depends-on ("_package"))
    (:file "Buffinfo" :depends-on ("_package_Buffinfo"))
    (:file "_package_Buffinfo" :depends-on ("_package"))
    (:file "BulletMove" :depends-on ("_package_BulletMove"))
    (:file "_package_BulletMove" :depends-on ("_package"))
    (:file "BulletsInfo" :depends-on ("_package_BulletsInfo"))
    (:file "_package_BulletsInfo" :depends-on ("_package"))
    (:file "GameResult" :depends-on ("_package_GameResult"))
    (:file "_package_GameResult" :depends-on ("_package"))
    (:file "GameStatus" :depends-on ("_package_GameStatus"))
    (:file "_package_GameStatus" :depends-on ("_package"))
    (:file "GameSurvivor" :depends-on ("_package_GameSurvivor"))
    (:file "_package_GameSurvivor" :depends-on ("_package"))
    (:file "GimbalAngle" :depends-on ("_package_GimbalAngle"))
    (:file "_package_GimbalAngle" :depends-on ("_package"))
    (:file "GimbalRate" :depends-on ("_package_GimbalRate"))
    (:file "_package_GimbalRate" :depends-on ("_package"))
    (:file "GlobalPlannerAction" :depends-on ("_package_GlobalPlannerAction"))
    (:file "_package_GlobalPlannerAction" :depends-on ("_package"))
    (:file "GlobalPlannerActionFeedback" :depends-on ("_package_GlobalPlannerActionFeedback"))
    (:file "_package_GlobalPlannerActionFeedback" :depends-on ("_package"))
    (:file "GlobalPlannerActionGoal" :depends-on ("_package_GlobalPlannerActionGoal"))
    (:file "_package_GlobalPlannerActionGoal" :depends-on ("_package"))
    (:file "GlobalPlannerActionResult" :depends-on ("_package_GlobalPlannerActionResult"))
    (:file "_package_GlobalPlannerActionResult" :depends-on ("_package"))
    (:file "GlobalPlannerFeedback" :depends-on ("_package_GlobalPlannerFeedback"))
    (:file "_package_GlobalPlannerFeedback" :depends-on ("_package"))
    (:file "GlobalPlannerGoal" :depends-on ("_package_GlobalPlannerGoal"))
    (:file "_package_GlobalPlannerGoal" :depends-on ("_package"))
    (:file "GlobalPlannerResult" :depends-on ("_package_GlobalPlannerResult"))
    (:file "_package_GlobalPlannerResult" :depends-on ("_package"))
    (:file "JudgeSysShootHit" :depends-on ("_package_JudgeSysShootHit"))
    (:file "_package_JudgeSysShootHit" :depends-on ("_package"))
    (:file "LocalPlannerAction" :depends-on ("_package_LocalPlannerAction"))
    (:file "_package_LocalPlannerAction" :depends-on ("_package"))
    (:file "LocalPlannerActionFeedback" :depends-on ("_package_LocalPlannerActionFeedback"))
    (:file "_package_LocalPlannerActionFeedback" :depends-on ("_package"))
    (:file "LocalPlannerActionGoal" :depends-on ("_package_LocalPlannerActionGoal"))
    (:file "_package_LocalPlannerActionGoal" :depends-on ("_package"))
    (:file "LocalPlannerActionResult" :depends-on ("_package_LocalPlannerActionResult"))
    (:file "_package_LocalPlannerActionResult" :depends-on ("_package"))
    (:file "LocalPlannerFeedback" :depends-on ("_package_LocalPlannerFeedback"))
    (:file "_package_LocalPlannerFeedback" :depends-on ("_package"))
    (:file "LocalPlannerGoal" :depends-on ("_package_LocalPlannerGoal"))
    (:file "_package_LocalPlannerGoal" :depends-on ("_package"))
    (:file "LocalPlannerResult" :depends-on ("_package_LocalPlannerResult"))
    (:file "_package_LocalPlannerResult" :depends-on ("_package"))
    (:file "MovePoint" :depends-on ("_package_MovePoint"))
    (:file "_package_MovePoint" :depends-on ("_package"))
    (:file "ObstacleMsg" :depends-on ("_package_ObstacleMsg"))
    (:file "_package_ObstacleMsg" :depends-on ("_package"))
    (:file "Position" :depends-on ("_package_Position"))
    (:file "_package_Position" :depends-on ("_package"))
    (:file "ProjectileSupply" :depends-on ("_package_ProjectileSupply"))
    (:file "_package_ProjectileSupply" :depends-on ("_package"))
    (:file "RobotBonus" :depends-on ("_package_RobotBonus"))
    (:file "_package_RobotBonus" :depends-on ("_package"))
    (:file "RobotDamage" :depends-on ("_package_RobotDamage"))
    (:file "_package_RobotDamage" :depends-on ("_package"))
    (:file "RobotHeat" :depends-on ("_package_RobotHeat"))
    (:file "_package_RobotHeat" :depends-on ("_package"))
    (:file "RobotPosition" :depends-on ("_package_RobotPosition"))
    (:file "_package_RobotPosition" :depends-on ("_package"))
    (:file "RobotShoot" :depends-on ("_package_RobotShoot"))
    (:file "_package_RobotShoot" :depends-on ("_package"))
    (:file "RobotStatus" :depends-on ("_package_RobotStatus"))
    (:file "_package_RobotStatus" :depends-on ("_package"))
    (:file "ShootInfo" :depends-on ("_package_ShootInfo"))
    (:file "_package_ShootInfo" :depends-on ("_package"))
    (:file "ShootState" :depends-on ("_package_ShootState"))
    (:file "_package_ShootState" :depends-on ("_package"))
    (:file "SupplierStatus" :depends-on ("_package_SupplierStatus"))
    (:file "_package_SupplierStatus" :depends-on ("_package"))
    (:file "TwistAccel" :depends-on ("_package_TwistAccel"))
    (:file "_package_TwistAccel" :depends-on ("_package"))
  ))