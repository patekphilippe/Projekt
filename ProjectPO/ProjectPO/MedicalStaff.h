#pragma once
#include "Citizen.h"
///This class inherits from Citizen class, its purpose is to heal humanity.
///Medical staff tries to save as many people as possible during simulation,
///preventing them from extinction.
class MedicalStaff :
	public Citizen
{
public: 
	MedicalStaff();
	/// Constructor which initializes object parameters.
	MedicalStaff(int age, int immune, string profession, int health);
	/// This specific ability is used to heal humanity.
	/// <returns></returns> random amount of healing 0-9
	int ability();
};

