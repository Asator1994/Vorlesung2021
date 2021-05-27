#pragma once
#include "Fortbewegungsmittel.h"
class Horse :
    public Fortbewegungsmittel
{
public:
    Horse();
    int move() override;
};

