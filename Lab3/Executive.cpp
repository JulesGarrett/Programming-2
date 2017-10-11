/**
*	@file Executive.cpp
*	@author Julia Garrett
*	@date 9/27/2016
*	@brief Executive file for a program that allows the user to input values into three different math functions.
*/
#include "Executive.h"
#include <iostream>
#include <string>
#include "MathTools.h"
using namespace std;
Executive::Executive()
{
}

void Executive::run(){
    cout<<"Select which math function you would like to do:"<<endl;
    int select=0;
    MathTools m;
    double a,b,c;
    double x[2];
    double cor[2][2];
    int num;
        while(select !=4){
            cout<<"1. Enter A, B, C for a quadratic equation to be solved."<<endl;
            cout<<"2. Enter d, e, f parameters for a line to be intersected with a unit circle"<<endl;
            cout<<"3. Enter Area, Extra, and minRequiredLength for a ballroom"<<endl;
            cout<<"4. Exit"<<endl;
            cin>>select;
            try{
            if(select==1){
                cout<<"A: ";
                cin>>a;
                cout<<"B: ";
                cin>>b;
                cout<<"C: ";
                cin>>c;
                num=m.solveQuadratic(a,b,c,x);
                if(num==2){
                cout<<"There are "<<num<<" roots: "<<x[0]<<" "<<x[1]<<endl;
                }
                if(num==1){
                    cout<<"There is "<<num<<" root: "<<x[0]<<endl;
                }
            }


            if(select==2){
                cout<<"d: ";
                cin>>a;
                cout<<"e: ";
                cin>>b;
                cout<<"f: ";
                cin>>c;
                num=m.intersectLineUnitCircle(a,b,c,cor);
                if(num==1){
                cout<<"There are "<<num<<" intersection point(s): ("<<cor[0][0]<<", "<<cor[0][1]<<")"<<endl;
                }
                if(num==2){
                    cout<<"There are "<<num<<" intersection point(s): ("<<cor[0][0]<<", "<<cor[0][1]<<") and ("<<cor[1][0]<<", "<<cor[1][1]<<")"<<endl;
                }

            }


            if(select==3){
                cout<<"Area: ";
                cin>>a;
                cout<<"Extra: ";
                cin>>b;
                cout<<"Minimum Required Length: ";
                cin>>c;
                m.roomdimensions(a,b,c);
            }
            }
            catch(NegativeDiscriminant z){
                cout<<std::endl<<z.what()<<std::endl;
            }
            catch(CannotDetermineRoomDimensions y){
                cout<<std::endl<<y.what()<<std::endl;
            }
             catch( NoIntersection x){
                cout<<std::endl<<x.what()<<std::endl;
            }

            //throws exception if user inputs a value that is not on the menu
            if(select > 4 || select<1)
                throw (5);
        }
    }

