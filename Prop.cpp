#include "Prop.h"


Prop::Prop(string name, int maxHitPoints, int startHitPoints)
{
	m_name = name;
	m_maxHitPoints = maxHitPoints;
	m_currentHitPoints = startHitPoints;
}

int Prop::GetDamagePercentage(void)		//can only be used inside of this class due to privatation of the nhs
{
	return((m_maxHitPoints - m_currentHitPoints) * 100) / m_maxHitPoints;
}

void Prop::DisplayDetails(void)
{
	printf("Name: %\n", m_name.c_str());
	printf("Max Hit Points: %d\n", m_maxHitPoints);
	printf("Current HitPoints: %d\n", m_currentHitPoints);
	printf("Damage : %d%\n", GetDamagePercentage());
}

int Prop::getHitpoints(void)
{
	return m_currentHitPoints;
}
void Prop::setHitpoints(int points)
{
	m_currentHitPoints = points;
}
void Prop::addHitpoints(int pointsToAdd)
{
	m_currentHitPoints += pointsToAdd;
}
int Prop::getMaxHitPoints(void)
{
	return m_maxHitPoints;
}
void Prop::setMaxHitPoints(int maxPoints)
{
	m_maxHitPoints = maxPoints;
}