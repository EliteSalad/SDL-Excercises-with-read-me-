#pragma once
#include "Creature.h"

class Hero : public Creature
{
private:

public:
	int m_lives;
	int m_score;
	void display();
	Hero(int lives);
	~Hero();
};

