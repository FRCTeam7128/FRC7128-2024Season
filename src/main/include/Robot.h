// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <string>

#include <frc/TimedRobot.h>
#include <frc/smartdashboard/SendableChooser.h>
#include "frc/drive/RobotDriveBase.h"
#include <frc/drive/DifferentialDrive.h>

#include "ctre/Phoenix.h"

#include <frc/XboxController.h>

class Robot : public frc::TimedRobot
{
 public:
  void RobotInit() override;
  void RobotPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void DisabledInit() override;
  void DisabledPeriodic() override;
  void TestInit() override;
  void TestPeriodic() override;
  void SimulationInit() override;
  void SimulationPeriodic() override;

 private:
  frc::SendableChooser<std::string> m_chooser;
  const std::string kAutoNameDefault = "Default";
  const std::string kAutoNameCustom = "My Auto";
  std::string m_autoSelected;
  frc::XboxController m_movementCOntroller{ 0 };

  WPI_VictorSPX m_motorFR(1),
    m_motorBR(2),
    m_motorFL(3),
    m_motorBL(4);

  frc::DifferentialDrive m_robotDrive(m_motorFL, m_motorFR);
};