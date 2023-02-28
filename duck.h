#pragma once

#include "bird.h"

class Duck : public Bird
{
public:
    Duck(const string &name_in);
    ~Duck();
    void have_babies();
    void talk() const override;

private:
    int num_ducklings;
};