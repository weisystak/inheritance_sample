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

    // private:
    const int roads_crossed = 10;
};