#include <iostream>
#include <random>

#include "Horse.h"
#include "Player.h"
#include "Tesla.h"
#include "Trabbi.h"

Fortbewegungsmittel* buyFortbewegungsmittel()
{
	switch (rand() % 3)
	{
	case 0:
		return new Horse();
	case 1:
		return new Tesla("Tesla");
	case 2:
		return new Trabbi("Trabant");
	}
}

int main()
{
	//Ball* ball = new Ball();
	//Player* player = new Player(7, 5);
	//player->pass(6, ball);

	for (int i = 0; i <= 10; i++)
	{
		Fortbewegungsmittel* mittel = buyFortbewegungsmittel();
		std::cout << mittel->move() << mittel->getName() << std::endl;;
	}
}
