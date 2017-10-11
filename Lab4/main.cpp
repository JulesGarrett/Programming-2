/**
*File: main.cpp
*Author: Julia Garrett
*KUID Number: 2834743
*Date Last Updated: October 4, 2016
*Purpose: Simulates an elevator
**/
#include <iostream>
#include "Executive.h"

using namespace std;

int main(int argc, char *argv[])
{


    std::string filename=argv[1];
    Executive e;
    e.run(filename);
    return 0;
}
