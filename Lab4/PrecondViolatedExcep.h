#ifndef _PRECOND_VIOLATED_EXCEP
#define _PRECOND_VIOLATED_EXCEP

#include <stdexcept>
#include <string>

using namespace std;

class PrecondViolatedExcep : public logic_error
{
public:
    //error used to throughtout code
   PrecondViolatedExcep(const string& message = "");
}; // end PrecondViolatedExcep
#endif
