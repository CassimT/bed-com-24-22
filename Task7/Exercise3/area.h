#ifndef AREA_H
#define AREA_H

#include "square.h" 
#include "triangle.h"
#include "circle.h"
class Area {
public:
    static double calculateAreaOfSquare(const shapes::Square &square); 
    static double calculateareaOfTriangle(const shapes::Triangle &triangle);
    static double calculateAreaOfCircle(const shapes::Circle &circle);

};

#endif // AREA_H