/**
*	@file City.cpp
*	@author Julia Garrett
*	@date 9/27/2016
*	@brief A header file for the city class
*/
#include <iostream>
#include "City.h"
#include <string>
#include <fstream>
using namespace std;

City::City()
{
    population = 0;
    infectionLevel = 0;
    cityName = "";
}

void City::setPopulation(int pop)
{
    population = pop;
}

int City::getPopulation()
{
    return(population);
}
//Getters and setters for City name
void City::setCityName(string name)
{
    cityName = name;
}

string City::getCityName()
{
    return(cityName);
}

//Getters and setters for infection level
void City::setInfectionLevel(int level)
{
    infectionLevel = level;
}

int City::getInfectionLevel()
{
    return(infectionLevel);
}
