/**
*	@file City.h
*	@author Julia Garrett
*	@date 9/27/2016
*	@brief A header file for the ADT city class
*/

#include <iostream>
#include <string>
using namespace std;

#ifndef CITY_H
#define CITY_H

class City
{
private:
    string cityName;
    int population;
    int infectionLevel;
public:
    City();

    //Getters and setters for Population
    void setPopulation(int pop);
    int getPopulation();

    //Getters and setters for City name
    void setCityName(string name);
    string getCityName();

    //Getters and setters for infection level
    void setInfectionLevel(int level);
    int getInfectionLevel();
};

#endif
