/**
*	@file main.cpp
*	@author Julia Garrett
*	@date 9/27/2016
*	@brief Main file for a program that allows the user to input values into three different math functions:
*           Quadratic function, Intersection of a circle and line, and find the room dimensions
*/

#include <iostream>
#include "MathTools.h"
#include "Executive.h"
using namespace std;

int main()
{
    try{
    Executive exe;
    exe.run();
    return 0;
    }
    catch(int e){
    std::cout<<"Only Inputs 1-4 are valid"<<std::endl;
    }
}
