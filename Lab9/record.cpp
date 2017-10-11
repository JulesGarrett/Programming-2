//Authoer Julia Garrett
//Student Id number: 2834743
//Date: 6/8/16
//Lab 9
#include "record.h"
#include <string>

using namespace std;

record::record()
{
    //ctor
}

record::~record()
{
    //dtor
}
void record::setname(std::string patname)
{
    name=patname;
}
void record::setneed(int pneed)
{
    need=pneed;
}
int record::getneed()
{
    return need;
}
string record::getname()
{
    return name;
}
