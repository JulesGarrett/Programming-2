//Authoer Julia Garrett
//Student Id number: 2834743
//Date: 6/8/16
//Lab 9
#ifndef RECORD_H
#define RECORD_H
#include <string>


class record
{
    public:
        record();
        ~record();
        void setname(std::string patname);
        void setneed(int pneed);
        int getneed();
        std::string getname();

    protected:

    private:
      int need;
      std::string name;
};

#endif // RECORD_H
