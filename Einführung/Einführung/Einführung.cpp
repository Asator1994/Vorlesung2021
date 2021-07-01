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

int doSth()
{
	int a;
	for (int i = 0; i < 100000; i++)
	{
		a = 6;
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

		delete mittel;
		std::cout << mittel->move() << mittel->getName() << std::endl;;

		delete mittel;
		delete mittel;
		mittel = nullptr;
		delete mittel;
		if (mittel)
			if (mittel != nullptr)
		mittel->getName();
	}





	doSth();
}
