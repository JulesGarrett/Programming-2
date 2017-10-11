/**
*	@file MedicalExecutive.h
*	@author Julia Garrett
*	@date 9/27/2016
*	@brief A header file for Medical Executive
*/
#include <iostream>
#include <string>
#include <fstream>
#include "City.h"
#include "LinkedList.h"
using namespace std;

#ifndef MEDICALEXECUTIVE_H
#define MEDICALEXECUTIVE_H

class MedicalExecutive
{
private:
    string inputFile;
    string outputFile;
    LinkedList<City>* main = new LinkedList<City>();
    LinkedList<City>* dead = new LinkedList<City>();
public:
    MedicalExecutive();
    ~MedicalExecutive();
    void increaseAll();
    void increaseOne(string name);
    void printStatus(string name);
    void createLog(string fileName);
    void printAbove(int num);
    void sort();

};

#endif
