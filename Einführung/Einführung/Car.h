#pragma once
#include "Fortbewegungsmittel.h"
class Car :
    public Fortbewegungsmittel
{
public:
    Car(std::string name);
    int move() override;
};

