/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <Commands/CommandGroup.h>
#include <string>
#include <DriverStation.h>
#include "../Enums/Direction.h"


class Auto : public frc::CommandGroup {
private:
	std::string autoType;
	Direction side;
	std::string gameData;
public:
	Auto(std::string autoType);
};

