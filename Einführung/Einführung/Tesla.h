#pragma once
#include "Car.h"
class Tesla :
    public Car
{
public:
    Tesla(std::string name);
    int move() override;
};

