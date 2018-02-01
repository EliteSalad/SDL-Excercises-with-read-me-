#include "Monster.h"


Monster::Monster(string name, int xpos, int ypos) :Creature(name, xpos, ypos)
{
}


Monster::~Monster()
{
}

void Monster::chase(Hero target)
{
	if (target.GetX() > m_xpos)
		right();
	else if (target.GetX() < m_xpos)
		left();
	else if (target.GetY() > m_ypos)
		down();
	else if (target.GetY() < m_xpos)
		up();
	

}



bool Monster::eaten(Hero target)
{
	if (target.GetX() == m_xpos && target.GetY() == m_ypos)
		return true;
	else
		return false;
}