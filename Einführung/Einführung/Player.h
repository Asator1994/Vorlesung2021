#pragma once
#include <string>

#include "Ball.h"

class Player
{
	std::string name = "Hallo";
	std::string nam23 = name;
	Ball* ball;
	int  m_position;
	bool m_hasBall = false;
	int  m_strength;
public:
	Player(int position, int strength);
	void pass(int position, Ball * ball);
	int a;
protected:

private:
	int b;

};

