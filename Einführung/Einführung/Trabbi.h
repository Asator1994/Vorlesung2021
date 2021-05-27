#pragma once
#include "Car.h"
class Trabbi :
    public Car
{
public:
    Trabbi(std::string name);
    int move() override;
};

