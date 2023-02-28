#include <iostream>
#include "bird.h"
using namespace std;

Bird::Bird(const string &name_in)
    : age(0), name(name_in)
{
    cout << "Bird ctor" << endl;
}

Bird::~Bird()
{
    cout << "Bird dtor" << endl;
}

string Bird::get_name() const
{
    return name;
}

int Bird::get_age() const
{
    return age;
}

void Bird::have_birthday()
{
    ++age;
}

void Bird::talk() const
{
    cout << "tweet" << endl;
}
