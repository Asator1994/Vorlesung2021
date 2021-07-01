#pragma once
class Ball
{
	virtual ~Ball();
	int m_position = 0;
	int m_speed = 0;
public:
	void changeSpeed(int acceleration);
};

