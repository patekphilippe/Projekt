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
string Region::getNameOfRegion()
{
	return this->nameOfRegion;
}
int Region::getPopulation()
{
	return this->population;
}
Region::~Region(){}

