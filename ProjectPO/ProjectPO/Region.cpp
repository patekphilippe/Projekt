#include "Region.h"
using namespace std;
Region::Region(string nameOfRegion, int population, int economics)
{
	this->nameOfRegion = nameOfRegion;
	this->population_amount = population;
	this->economics = economics;
}

int Region::getEconomics()
{
	return this->economics;
}

string Region::getNameOfRegion()
{
	return this->nameOfRegion;
}
int Region::getPopulationAmount()
{
	return this->population_amount;
}
