/**
*	@file Executive.h
*	@author Julia Garrett
*	@date 9/27/2016
*	@brief The header file for a Executive file that allows the user to input values into three different math functions
*/
#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "MathTools.h"

class Executive
{
    public:
        Executive();
        //Creates menu for user to interact with and calls math functions
        void run();

    protected:

    private:
        int select;
        MathTools m;
        double a, b, c;
        double x[2];
        double cor[2][2];
        int num;
};

#endif // EXECUTIVE_H
