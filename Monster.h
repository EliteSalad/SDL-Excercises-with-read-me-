#pragma once
#include "Hero.h"
#include <string>

class Monster : public Creature
{
private:
	
public:
	bool eaten(Hero target);
	void chase(Hero target);
	Monster(string name, int xpos, int ypos);
	~Monster();
};

