/**
*	@file NoIntersection.h
*	@author Julia Garrett
*	@date 9/27/2016
*	@brief The h file for NoIntersection exception file.
*/
#ifndef NOINTERSECTION_H
#define NOINTERSECTION_H
#include <string>
#include <stdexcept>

class NoIntersection : public std::runtime_error
{
    public:
        //
        NoIntersection(const std::string& message="");

    protected:

    private:
};

#endif // NOINTERSECTION_H
