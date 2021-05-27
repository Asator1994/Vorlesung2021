#include "Player.h"


Player::Player(int position, int strength)
	: m_position(position)
	, m_strength(strength)
{
}


void Player::pass(int position, Ball * ball)
{
	m_strength = 100;
	b = 100;
	if (m_hasBall) {
		int acceleration = position > m_position ? m_strength : -m_strength;
		ball->changeSpeed(acceleration);
	}
}
