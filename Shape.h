#pragma once
class Shape
{
private:
public:
	virtual double getArea();
virtual ostream& draw(ostream& strm) = 0;
};
