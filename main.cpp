

#include "Prop.h"
#include <conio.h>	//_getch 
#include "Creature.h"


int main() 
{
	
	//Prop box1("Snake's Crate", 350, 192);
	//box1.DisplayDetails();

	//_getch(); //wait for input 

	Creature Creature1("Minotaur" , 5, 5), Creature2("Gorgan" , 7, 4);
	
	Creature1.display();
	Creature2.display();

	Creature1.setX(3);
	Creature1.setY(2);

	Creature2.setX(6);
	Creature2.setY(9);

	Creature1.display();
	Creature2.display();

	Creature1.left();
	Creature1.up();
	Creature1.up();
	Creature1.left();
	Creature1.down();

	Creature2.right();
	Creature2.down();
	Creature2.left();
	Creature2.up();
	Creature2.up();

	Creature1.display();
	Creature2.display();

	_getch();

	return 0;
}