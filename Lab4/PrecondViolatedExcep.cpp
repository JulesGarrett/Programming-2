/**
*File: PrecondViolatedExcep.cpp
*Author: Julia Garrett
*KUID Number: 2834743
*Date Last Updated: October 4, 2016
*Purpose: Is the runtime error that is used to throw exceptions
**/
#include "PrecondViolatedExcep.h"


PrecondViolatedExcep::PrecondViolatedExcep(const string& message): logic_error("Precondition Violated Exception: " + message)
{
}  // end constructor
