/*Author: Julia Garrett
Last worked on: 9/6/2016
Lab 1 program for EECS 268
Summary of Program:
This program will open a file read from that file voter registration information
It will then create a dynamic array. When prompted the user will have four different
ways to find information from the voter registration file.*/
#include "VoterRegistrationRecord.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
//stores 4 variables: first name, last name, age, and affiliation
VoterRegistrationRecord::VoterRegistrationRecord()
{
        string fname;
        string lname;
        int age;
        string affiliation;
};
//Takes in the inputed values for the first and last name, age and affiliation and assigns them to the variables in VoterRegistrationRecord
void VoterRegistrationRecord:: setinputs(string l_name, string f_name, int agei, string affiliationi){
fname=f_name;
lname=l_name;
age=agei;
affiliation=affiliationi;
}
//Returns the last name
string VoterRegistrationRecord:: getlname(){
    return (lname);
}
//Outputs to the console the stores values for first and last name, age and affiliation
void VoterRegistrationRecord::listrecord(){
    cout<<"Record: "<<fname<<" "<<lname<<"; age: "<<age<<"; Registered as "<<affiliation<<endl;
}
//Returns the age
int VoterRegistrationRecord::getage(){
    return(age);
}
//Returns the affiliation
string VoterRegistrationRecord::getaffiliation(){
    return(affiliation);
}
