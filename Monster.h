#pragma once
#include "Hero.h"

class Monster : public Creature
{
private:
	bool eaten(Hero target);
public:
	void chase(Hero target);
	Monster();
	~Monster();
};

