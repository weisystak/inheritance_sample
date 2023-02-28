#include "duck.h"
#include <iostream>

Duck::Duck(const string &name_in)
    : Bird(name_in),
      num_ducklings(0)
{
    cout << "Duck ctor" << endl;
}
Duck::~Duck()
{
    cout << "Duck dtor" << endl;
}
void Duck::have_babies()
{
    num_ducklings += 7;
}

void Duck::talk() const
{
    cout << "quack" << endl;
}
