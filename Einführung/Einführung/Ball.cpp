#include "Ball.h"

Ball::~Ball() = default;

void Ball::changeSpeed(int acceleration)
{
	m_speed += acceleration;
}


