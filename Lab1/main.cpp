/*Author: Julia Garrett
Last worked on: 9/6/2016
Lab 1 program for EECS 268
Summary of Program:
This program will open a file read from that file voter registration information
It will then create a dynamic array. When prompted the user will have four different
ways to find information from the voter registration file.*/

#include <iostream>
#include <fstream>
#include <string>
#include "Executive.h"
#include "VoterRegistrationRecord.h"


//This class will call will create an object of the executive class and call the run function via the object
int main(int argc, char* argv[])
{
    Executive e(argv[1]);
    e.run();
    return 0;
}

