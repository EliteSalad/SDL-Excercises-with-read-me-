#pragma once

#include <string>

using namespace std;

class Prop
{
private:
	//private member variables
	int m_maxHitPoints;
	int m_currentHitPoints;
	string m_name;

	//private methods
	int GetDamagePercentage(void);
public:
	Prop();
	Prop(string name, int maxHitPoints, int startHitPoints);
	
	void DisplayDetails(void);
	int getHitpoints(void);
	void setHitpoints(int points);
	void addHitpoints(int pointsToAdd);
	int getMaxHitPoints(void);
	void setMaxHitPoints(int maxPoints);

	~Prop();
};

