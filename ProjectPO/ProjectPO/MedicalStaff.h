#pragma once
#include "Citizen.h"
class MedicalStaff :
	public Citizen
{
public: 
	MedicalStaff();
	MedicalStaff(int age, int immune, string profession, int health);
	int ability();
};

