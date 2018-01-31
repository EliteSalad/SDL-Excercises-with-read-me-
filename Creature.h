#pragma once
#include "Prop.h"
class Creature
{
private:
	int m_xpos, m_ypos;
	string m_name;
public:
	Creature(string name, int xpos, int ypos);

	void display();

	void left();
	void right();
	void up();
	void down();

	void setX(int x);
	void setY(int y);

	int GetX();
	int GetY();

	~Creature();
};

