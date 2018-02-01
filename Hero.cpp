#include "Hero.h"
using namespace std;

Hero::Hero(int lives, string name, int xpos, int ypos) 
	: Creature(name, xpos, ypos)
{
	m_score = 0;
	m_lives = lives;
}


Hero::~Hero()
{
}

void Hero::display()
{
	Creature::display(); //calling creatures display

	printf("Lives: %d", m_lives);
	printf(" Score: %d\n", m_score);
}
