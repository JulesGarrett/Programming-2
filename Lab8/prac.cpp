#include <iostream>
#include <string>
#include <fstream>
#include "BinarySearchTree.h"
#include "pokemon.h"
#include <sstream>

using namespace std;

int main(int argc, char* argv[])
{

pokemon* poke;
poke= new pokemon[151];  //Go back and change to getline and make it work
int arrSize=0;
string* tempArr = new string [3];
string s;
while(getline(file, s)){
    istringstream ss;
    ss.str(s);
    string word;
    int i=0;
    while(getline(ss, word, ',')){
        tempArr[i]=word;
        i++;
    }
    poke[arrSize].setename(tempArr[0]);
    poke[arrSize].setpnum(tempArr[1]);
    poke[arrSize].setjname(tempArr[2]);
    arrSize++;
}
}
return 0;
