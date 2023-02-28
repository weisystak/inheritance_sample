#pragma once
#include <string>
using namespace std;

class Bird
{
public:
    Bird(const string &name_in);
    virtual ~Bird();
    string get_name() const;
    int get_age() const;
    void have_birthday();
    virtual void talk() const;

private:
    int age;
    string name;
};