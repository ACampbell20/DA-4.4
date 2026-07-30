#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main()
{
    int size = 2;

    Shape* s1 = new Circle(size);
    Shape* s2 = new Rectangle(size, size);
    Shape* s3 = new Triangle(size, size);

    s1->draw(cout);
    cout << endl << endl;

    s2->draw(cout);
    cout << endl << endl;

    s3->draw(cout);
    cout << endl;

    delete s1;
    delete s2;
    delete s3;
}
