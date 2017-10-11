/*Author: Julia Garrett
Last worked on: 9/6/2016
Lab 1 program for EECS 268
Summary of Program:
This program will open a file read from that file voter registration information
It will then create a dynamic array. When prompted the user will have four different
ways to find information from the voter registration file.*/
#ifndef VOTERREGISTRATIONRECORD_H
#define VOTERREGISTRATIONRECORD_H
#include <string>

using namespace std;

class VoterRegistrationRecord
{
    public:
        //stores 4 variables: first name, last name, age, and affiliation
        VoterRegistrationRecord();
        //Takes in the inputed values for the first and last name, age and affiliation and assigns them to the variables in VoterRegistrationRecord
        void setinputs(string l_name, string f_name, int agei, string affiliationi);
        //returns last name
        string getlname();
        //outputs first and last name, age and affiliation to the console
        void listrecord();
        //returns age
        int getage();
        //returns affiliation
        string getaffiliation();

    private:
        std::string fname;//first name
        std::string lname;//last name
        int age;//age
        std::string affiliation;//affiliation
};

#endif
