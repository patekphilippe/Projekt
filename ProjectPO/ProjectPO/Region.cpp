#include "Region.h"

Region::Region(string nameOfRegion, string season="spring", int population, float economics) 
{
	this->nameOfRegion = nameOfRegion;
	this->season = season;
	this->population;
	this->economics = economics;
}

string Region::getClimate()
{
	return this->climate;
}
float Region::getEconomics()
{
	return this->economics;
}
string Region::getSeason()
{
	return this->season;
}
string Region::getNameOfRegion(int opcja)
{
	switch (opcja)
	{
	case 0:
		Region * kontynent = new Region("Afryka");
		break;
	case 1:
		Region * kontynent = new Region("Azja");
		break;
	case 2:
		Region * kontynent = new Region("Ameryka pó³nocna");
		break;
	case 3:
		Region * kontynent = new Region("Ameryka po³udniowa");
		break;
	case 4:
		Region * kontynent = new Region("Europa");
		break;
	case 5:
		Region * kontynent = new Region("Australia");
		break;
	case 6:
		Region * kontynent = new Region("Antarktyda");
		break;
	}
	return this->nameOfRegion;
}
int Region::getPopulation()
{
	
}
Region::~Region(){}

