#include "pokemon.h"
#include <string>

using namespace std;
pokemon::pokemon(string eng, string num, string jap){
  ename=eng;
  pnum=num;
  jname=jap;
}

string pokemon::getename()const{
    return ename;
}
string pokemon::getjname()const{
    return jname;
}
string pokemon::getpnum()const{
    return pnum;
}

pokemon::~pokemon()
{

}
//pokemon& operator<(const pokemon& rhs){
//    return left.getename()<right.getename();
//}
//pokemon& operator>(const pokemon& left, const pokemon& right){
//    return left.getename()>right.getename();
//}
