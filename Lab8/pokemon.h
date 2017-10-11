#ifndef POKEMON_H
#define POKEMON_H
#include <string>

class pokemon
{
    public:
        pokemon(std::string eng, std::string num, std::string jap);
       ~pokemon();
        std::string getename()const;
        std::string getjname()const;
        std::string getpnum()const;
        //pokemon operator<(pokemon);
        //pokemon operator>(pokemon);


    protected:

    private:
      std::string ename;
      std::string jname;
      std::string pnum;
};

#endif // POKEMON_H
