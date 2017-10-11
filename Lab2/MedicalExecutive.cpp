
/**
*	@file MedicalExecutive.cpp
*	@author Julia Garrett
*	@date 9/27/2016
*	@brief Executive file for Infection level simulation
*/#include <iostream>
#include "MedicalExecutive.h"
#include "City.h"
#include <string>
#include <fstream>

using namespace std;

MedicalExecutive::MedicalExecutive()
{
    ifstream fin;
    fin.open("List.txt");
    string city_name;
    string city_population;
    string city_infection;
    if(fin.fail())
    {
        std::cout << "ERROR. Could not locate the file.\n\n";
        exit(1);
    }

    while(fin.good())
    {

      std::getline(fin, city_name, ',');
      std::getline(fin, city_population, ',');
      std::getline(fin, city_infection);
      City temp = City();
      temp.setCityName(city_name);
      temp.setPopulation(stoi(city_population));
      temp.setInfectionLevel(stoi(city_infection));
      main -> addBack(temp);


      }
}

MedicalExecutive::~MedicalExecutive()
{
  delete main;
  delete dead;
}

void MedicalExecutive::sort()
{

}

void MedicalExecutive::increaseAll()
{
    int length = (main -> getLength());
    City temp = City();
    for(int i = 1 ; i < length ; i++)
    {
      temp = (main -> getEntry(i));
      temp.setInfectionLevel(temp.getInfectionLevel() + 1);
      main -> setEntry(i, temp);
      if(temp.getInfectionLevel() == 4)
      {
	std::cout << "\n" << temp.getCityName() << " has been placed in quarantine!\n\n";
	dead -> addBack(temp);
	main -> removeAt(i);
	length = (main -> getLength());
      }
    }
}

void MedicalExecutive::increaseOne(string name)
{
    City temp = City();
    temp.setCityName(name);
    int location = (main -> positionOf(temp));
    if(location == 0)
    {
      std::cout << "\nSorry, " << name << " is not a city in the list\n\n";
    }
    else
    {
      temp = (main -> getEntry(location));
      temp.setInfectionLevel(temp.getInfectionLevel() + 1);
      main -> setEntry(location, temp);
      std::cout << "\n\n";
    }

    if(temp.getInfectionLevel() == 4)
    {
      std::cout << "\n" << name << " has been placed in quarantine!";
      dead -> addBack(temp);
      main -> removeAt(location);
    }
}

void MedicalExecutive::printStatus(string name)
{
    City temp = City();
    temp.setCityName(name);
    int location = (main -> positionOf(temp));
    if(location == 0)
    {
      std::cout << "\nSorry, " << name << " is not a city in the list\n\n";
    }
    else
    {
      temp = (main -> getEntry(location));
      std::cout << "\nCity Name: " << temp.getCityName() << " Population: " << temp.getPopulation() << " Infection Level: " << temp.getInfectionLevel() << "\n\n";
    }


}

void MedicalExecutive::createLog(string fileName)
{
    ofstream fout;
    fout.open(fileName);
    int length = (dead -> getLength());
    City temp = City();
    for(int i = 1 ; i < length ; i++)
    {
      temp = (dead -> getEntry(i));
      fout << "testasdfasdfasdf";
    }
    fout.close();

}

void MedicalExecutive::printAbove(int num)
{
    int length = (main -> getLength());
    City temp = City();
    for(int i = 1 ; i < length ; i++)
    {
      temp = (main -> getEntry(i));
      if(temp.getInfectionLevel() > num)
      {
	std::cout << "\nCity Name: " << temp.getCityName() << " Population: " << temp.getPopulation() << " Infection Level: " << temp.getInfectionLevel() << "\n\n";
      }
    }
}
