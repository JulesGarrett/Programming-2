/**
*	@file main.cpp
*	@author Julia Garrett
*	@date 9/27/2016
*	@brief Main file for a program that allows the user to input values into three different math functions:
*           Quadratic function, Intersection of a circle and line, and find the room dimensions
*/
#include "MathTools.h"
#include <cmath>
#include <iostream>
#include <string>
#include "NegativeDiscriminant.h"
#include "NoIntersection.h"
#include "CannotDetermineRoomDimensions.h"
MathTools::MathTools()
{

}
int MathTools::intersectLineUnitCircle(double d, double e, double f, double xy[2][2])throw(NoIntersection){
std::string message= "No Intersection Point";
int num;
double x,y,z;
x=d*d+e*e;
y=2*e*f;
z=f*f-d*d;
double a[2];
num=solveQuadratic(x,y,z,a);
double xa=(e*a[0]+f)/d;
double xb=(e*a[1]+f)/d;
xy[0][0]=xa;
xy[0][1]=a[0];
xy[1][0]=xb;
xy[1][1]=a[1];
if(num<0){
    throw(NoIntersection(message));
}
return num;



}

 int MathTools::solveQuadratic(double a, double b, double c, double roots[])throw(NegativeDiscriminant){
	std::string message= "Negative Discriminant";
	double descrim;
	descrim=(b*b)-(4*a*c);
	if(descrim<0){
            throw(NegativeDiscriminant(message));
	}
	if (descrim==0){
		roots[0]=(-b+sqrt(descrim))/(2*a);
		return 1;
    }
    else {
		roots[0]=(-b+sqrt(descrim))/(2*a);
		roots[1]=(-b-sqrt(descrim))/(2*a);

		return 2;
    }
}


 void MathTools::roomdimensions(double Area, double Extra, double minRequiredLength)throw(CannotDetermineRoomDimensions){
    double ans[2];
    int num;
    std::string message= "Cannot Determine Room Dimensions";
    num=solveQuadratic(1.0, Extra, -Area, ans);
    if(num<0){
        throw CannotDetermineRoomDimensions(message);
    }
    if(ans[0]<minRequiredLength){
        throw CannotDetermineRoomDimensions(message);
    }
    else{
        std::cout<<"The Length is "<<ans[0]<<std::endl;
        std::cout<<"The width is "<<ans[0]+Extra<<std::endl;
    }






}
