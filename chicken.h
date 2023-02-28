#pragma once
#include "bird.h"

using namespace std;

class Chicken : public Bird
{
public:
    Chicken(const string &name_in);
    ~Chicken();
    void cross_road();
    void talk() const override;

private:
    int roads_crossed;
};