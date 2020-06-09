#pragma once
#include "Virus.h"

///This class inherits from Virus class
///This specific virus makes human sterile, preventing from procreation.

class ReproductiveVirus :public Virus {
public:
	/// Constructor which initializes virus parameters.
	/// <param name="iscurable"></param>Parameter which determines if virus can be cured or not.
	/// <param name="mutation"></param>Paramater which lowers amount of healing object receives.
	ReproductiveVirus(std::string, bool, int);
	/// Special Virus ability which makes human sterile.
	/// <returns></returns> always 0.
    int ability();
};
