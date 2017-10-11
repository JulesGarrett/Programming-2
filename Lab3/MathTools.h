#ifndef MATHTOOLS_H
#define MATHTOOLS_H
#include "MathToolsInterface.h"

class MathTools
{
    public:
        MathTools();
        int intersectLineUnitCircle(double d, double e, double f, double xy[2][2])throw(NoIntersection);
        int solveQuadratic(double a, double b, double c, double roots[])throw(NegativeDiscriminant);
        void roomdimensions(double Area, double Extra, double minRequiredLength)throw(CannotDetermineRoomDimensions);
    protected:

    private:
};

#endif // MATHTOOLS_H
