#pragma once
#include"Citizen.h"

///This class represents region which contains population.
/// 
///Every region has its own economy. Economy determines amount
///of medical staff and soldier in this region. 
///High level of economy increaces chances of travelling of people.
class Region
{
	///influences chances of travel or exisiting Soldier/Medial staff inhabitant in region
	int economics;
	/// name of the region
	std::string nameOfRegion;
	///  amount of humans in certain region
	int population_amount;

public:
	/// Constructor which initializes object parameters.
	Region(std::string, int, int);
	/// Every element of this vector stores reference to single inhabitant of region.
	std::vector<Citizen*> population;
	/// returns economy value
	int getEconomics();
	/// returns amount of people living in this region
	int getPopulationAmount();
	/// returns neme of the region
	std::string getNameOfRegion();
	
};

