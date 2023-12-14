// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "Robot.h"

#include <fmt/core.h>

#include <frc/smartdashboard/SmartDashboard.h>

void Robot::RobotInit()
{
  m_motorFL.SetInverted(true);
  m_motorBL.Follow(m_motorFL);
  m_motorBR.Follow(m_motorFR);
}

void Robot::RobotPeriodic()
{

}

void Robot::AutonomousInit()
{

}

void Robot::AutonomousPeriodic()
{

}

void Robot::TeleopInit()
{

}

void Robot::TeleopPeriodic()
{
  double forward = m_movementCOntroller.GetLeftY(),
    turning = m_movementCOntroller.GetRightX();

  m_robotDrive.ArcadeDrive(forward, turning, true);
}

void Robot::DisabledInit()
{

}

void Robot::DisabledPeriodic()
{

}

void Robot::TestInit()
{

}

void Robot::TestPeriodic()
{

}

void Robot::SimulationInit()
{

}

void Robot::SimulationPeriodic()
{

}

#ifndef RUNNING_FRC_TESTS
int main()
{
  return frc::StartRobot<Robot>();
}
#endif
