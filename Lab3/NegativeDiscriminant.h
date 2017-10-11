/**
*	@file NegativeDiscriminant.h
*	@author Julia Garrett
*	@date 9/27/2016
*	@brief Main file for a program that allows the user to input values into three different math functions:
*           Quadratic function, Intersection of a circle and line, and find the room dimensions
*/
#ifndef NEGATIVEDESCRIMINANT_H
#define NEGATIVEDESCRIMINANT_H
#include <string>
#include <stdexcept>

using namespace std;
class NegativeDiscriminant: public std::runtime_error
{
    public:
        NegativeDiscriminant(const std::string& message="");

    protected:

    private:
};

#endif // NEGATIVEDESCRIMINANT_H
