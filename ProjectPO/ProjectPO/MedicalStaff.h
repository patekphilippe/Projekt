#pragma once
#include "Citizen.h"

///This class inherits from Citizen class and creates medical stuff.
///Medical staff tries to save as many people as possible during simulation,
///preventing them from extinction.
class MedicalStaff :
	public Citizen
{
public: 
	/// Constructor which initializes object parameters.
	MedicalStaff(int age, int immune, std::string profession, int health);
	/// This specific ability is used to heal humanity.
	/// <returns></returns> random amount of healing 0-9
	int ability();
};

