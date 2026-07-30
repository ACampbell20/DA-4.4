#pragma once
#include "Shape.h"
#include <iostream>
class Circle :
    public Shape
{
private:
    int radius;
public:
    Circle();
    Circle(int radius);
    Circle(Circle& otherCircle);
    void setRadius(int radius);
    int getRadius();
    double getArea();
    std::ostream& draw(std::ostream& strm) override;
    Circle& operator=(Circle& otherCircle);
    friend std::ostream& operator<<(std::ostream& strm, Circle& circle);
ostream& draw(ostream& strm) override;
};
