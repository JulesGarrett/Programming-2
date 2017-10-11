/**
*	@file CannontDetermineRoomDimensions.h
*	@author Julia Garrett
*	@date 9/27/2016
*	@brief Main file for a program that allows the user to input values into three different math functions:
*           Quadratic function, Intersection of a circle and line, and find the room dimensions
*/
#ifndef CANNOTDETERMINEROOMDIMENSIONS_H
#define CANNOTDETERMINEROOMDIMENSIONS_H
#include <string>
#include <stdexcept>

class CannotDetermineRoomDimensions : public std::runtime_error
{
    public:
        CannotDetermineRoomDimensions(const std::string& message);

    protected:

    private:
};

#endif // CANNOTDETERMINEROOMDIMENSIONS_H
