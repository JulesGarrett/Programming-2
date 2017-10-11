/**
*	@file CannotDetermineRoomDimensions.cpp
*	@author Julia Garrett
*	@date 9/27/2016
*	@brief Main file for a program that allows the user to input values into three different math functions:
*           Quadratic function, Intersection of a circle and line, and find the room dimensions
*/
#include "CannotDetermineRoomDimensions.h"
#include <string>

CannotDetermineRoomDimensions:: CannotDetermineRoomDimensions(const std::string& message):
	std::runtime_error("Programmer defined exception: "+message)
{

}
