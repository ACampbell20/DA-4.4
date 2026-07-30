#pragma once
#include <iostream>

class Shape
{
private:

public:
    virtual double getArea();

    virtual std::ostream& draw(std::ostream& strm);
};
