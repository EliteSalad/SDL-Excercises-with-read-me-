#include "Creature.h"


Creature::Creature(string name, int xpos, int ypos)
{
	m_name = name;
	m_xpos = xpos;
	m_ypos = ypos;
}


Creature::~Creature()
{
}

void Creature::display()
{
	printf("Name: %\n", m_name.c_str());
	printf("X %d ", m_xpos);
	printf("Y %d\n", m_ypos);
	
}

void Creature::left()
{
	m_xpos -= 1;
}
void Creature::right()
{
	m_xpos += 1;
}
void Creature::up()
{
	m_ypos -= 1;
}
void Creature::down()
{
	m_ypos += 1;
}

void Creature::setX(int x)
{
	m_xpos = x;
}
void Creature::setY(int y)
{
	m_ypos = y;
}

int Creature::GetX()
{
	return m_xpos;
}
int Creature::GetY()
{
	return m_ypos;
}