/**
*	@file main.cpp
*	@author Julia Garrett
*	@date 9/27/2016
*	@brief Main file for infection program. Program simulates an infection game where the user can increase the infection level
of cities and then check on the city's population, infection level, and quarentine status.
*/
#include <iostream>
#include "Node.h"
#include "LinkedList.h"
#include "City.h"
#include "MedicalExecutive.h"

int main(int argc, char** argv)
{
  bool condition = true;
  int choice;
  string search_name;
  string log;
  int level;
  try
  {
    MedicalExecutive main = MedicalExecutive();
    while(condition == true)
    {
	std::cout << "\n\nMake a selection: \n";
	std::cout << "1) Increase infection level of all cities \n";
	std::cout << "2) Increase infection level of specific city \n";
	std::cout << "3) Print status of a specific city \n";
	std::cout << "4) Create quarantine log \n";
	std::cout << "5) Print all cities above an infection level \n";
	std::cout << "6) Exit \nChoice: ";
	std::cin >> choice;

	if(choice == 1)
	{
	  main.increaseAll();
	}
	else if(choice == 2)
	{
	  std::cout << "\n\nPlease enter the name of the city to increase the infection level: ";
	  std::cin >> search_name;
	  main.increaseOne(search_name);
	}
	else if(choice == 3)
	{
	  std::cout << "\n\nPlease enter the name of the city you want to search for: ";
	  std::cin >> search_name;
	  main.printStatus(search_name);
	}
	else if(choice == 4)
	{
	  std::cout << "\n\nPlease enter name of file to create. Ex. filename.txt\n";
	  std::cin >> log;
	  main.createLog(log);
	}
	else if(choice == 5)
	{
	  std::cout << "\n\nPrint cities above what Infection Level?: ";
	  std::cin >> level;
	  main.printAbove(level);
	}
	else if(choice == 6)
	{
	  std::cout << "Thanks for playing!\nBye!";
	  condition = false;
	}
	else
	{
	    throw 20;
	}
    }
  }
    catch(int e)
    {
      std::cout << "Error, incorrect input. Only Numbers 1-6 are accepted.\n\n\n";
    }
  return (0);
}
