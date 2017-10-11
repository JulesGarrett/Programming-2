/*Author: Julia Garrett
Last worked on: 9/6/2016
Lab 1 program for EECS 268
Summary of Program:
This program will open a file read from that file voter registration information
It will then create a dynamic array. When prompted the user will have four different
ways to find information from the voter registration file.*/
#include <string>
#include <iostream>
#include <fstream>
#include "Executive.h"
#include "VoterRegistrationRecord.h"

using namespace std;
//opens file reads the number of entries and allocates an array of VoterRegistrationRecord class with the contents of the file
Executive::Executive(char argv[100])
{
fstream file (argv);
file>>size;
record=new VoterRegistrationRecord[size];
cout<<argv;
if (file.is_open()){
        for (int i=0; i<size; i++){
            file>>f_name>>l_name>>age>>affiliation;
            record[i].setinputs(l_name, f_name, age, affiliation);
        }
}
else {
    cout<<"file not found"<<endl;
}
file.close();

};

//Outputs the menu option to the console and performs each selected task
void Executive:: run(){

string fnameselect;
string lnameselect;
int ageselect1;
int ageselect2;
string affiliationselect;

    while (select!=5){
        cout<<"Select how you would like to search the voter query?\n";
        cout<<" 1: Query last name\n 2: Query age range \n 3: Query affiliations\n 4: Report number of people with affiliation \n 5: Quit"<<endl;
        cin>> select;
        //Search by last name
        //assumes last name enter is in the document
        if(select==1){
            cout<<"Enter last name"<<endl;
            cin>>lnameselect;

            for (int i=0; i<size; i++){
                if(record[i].getlname()==lnameselect){
                record[i].listrecord();
                }
            }
            cout<<"\n";
        }
        //search by age range
        //assumes input of "number1 number2"
        if(select==2){
            cout<<"Enter age range"<<endl;
            cin>>ageselect1>>ageselect2;
            for (int i=0; i<size; i++){
                if((ageselect1<record[i].getage()) && (record[i].getage()<ageselect2)){
                record[i].listrecord();
                }
            }
             cout<<"\n";
        }
        //search by affiliation
        //assumes only searching for Democrat, Green, Independent, Libertarian, Republican, Unspecified
        if(select==3){
            cout<<"Enter affiliation"<<endl;
            cin>>affiliationselect;
            for (int i=0; i<size; i++){
                if(record[i].getaffiliation()==affiliationselect){
                record[i].listrecord();
                }
            }
            cout<<"\n";
        }
        //outputs the number of people in an affiliation
        //assumes only searching for Democrat, Green, Independent, Libertarian, Republican, Unspecified
        if(select==4){
            cout<<"Enter affiliation"<<endl;
            cin>>affiliationselect;
            int num=0;
            int sum=0;
            for (int i=0; i<size; i++){
                if(record[i].getaffiliation()==affiliationselect){
                sum=num++;
                }
            }
            cout<<"There are "<<sum<<" "<< affiliationselect<< "(s)"<<endl;
            cout<<"\n";
        }
    }
    cout<<"Thank you for checking voter Registration \n Good bye"<<endl;
}

