#include "Region.h"
Region::Region() {};
Region::Region(string nameOfRegion, int population, int economics)
{
	this->nameOfRegion = nameOfRegion;
	this->season = "spring";
	this->population_amount = population;
	this->economics = economics;
}

string Region::getClimate()
{
	return this->climate;
}
int Region::getEconomics()
{
	return this->economics;
}
string Region::getSeason()
{
	return this->season;
}
string Region::getNameOfRegion()
{
	return this->nameOfRegion;
}
int Region::getPopulationAmount()
{
	return this->population_amount;
}
