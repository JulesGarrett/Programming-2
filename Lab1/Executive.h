/*Author: Julia Garrett
Last worked on: 9/6/2016
Lab 1 program for EECS 268
Summary of Program:
This program will open a file read from that file voter registration information
It will then create a dynamic array. When prompted the user will have four different
ways to find information from the voter registration file.*/
#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include <string>
#include "VoterRegistrationRecord.h"

class Executive
{
    public:
        //opens file reads and stores information in allocated array
        Executive(char arvg[100]);
        //Creates menu for user to use to search the record file and returns the requested information
        void run();



    protected:

    private:
        int select;//the value that the user chooses from the menu
        int size;//the size of the array
        std::string l_name;//first name
        std::string f_name;//last name
        int age;//age
        std::string affiliation;//affiliation
        VoterRegistrationRecord* record;
};

#endif // EXECUTIVE_H
