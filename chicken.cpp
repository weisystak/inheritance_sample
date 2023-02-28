#include "chicken.h"
#include <iostream>

Chicken::Chicken(const string &name_in)
    : Bird(name_in),
      roads_crossed(0)
{
    cout << "Chicken ctor" << endl;
}

Chicken::~Chicken()
{
    cout << "Chicken dtor" << endl;
}

void Chicken::cross_road()
{
    ++roads_crossed;
}

void Chicken::talk() const
{
    cout << "bawwk" << endl;
}
