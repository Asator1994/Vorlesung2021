#include "Tesla.h"

Tesla::Tesla(std::string name)
    : Car(name)
{
}

int Tesla::move()
{
    return 500;
}
