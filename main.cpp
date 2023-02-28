#include "chicken.h"
#include "duck.h"
#include <iostream>

using namespace std;
int main()
{
    Bird big_bird("Big Bird");
    Chicken myrtle("Myrtle");
    Duck duk("duk");
    cout << "*****" << endl;
    big_bird.talk();
    myrtle.talk();
    duk.talk();
    cout << duk.get_name() << endl;
    cout << "*****" << endl;
}