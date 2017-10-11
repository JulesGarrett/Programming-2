/**

Author: Julia Garrett
10/27/2016
**/
#ifndef MAZECREATIONEXCEPTION_H
#define MAZECREATIONEXCEPTION_H
#include <stdexcept>

class MazeCreationException : public std::runtime_error
{
         public:MazeCreationException(const char* message);
};

#endif
