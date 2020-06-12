#pragma once
#include "Virus.h"

///This class inherits from Virus class
///This specific virus lowers human immunity and making him easier to kill.

class RespiratoryVirus : public Virus {
public:
	/// Constructor which initializes virus parameters.
	/// <param name="iscurable"></param>Parameter which determines if virus can be cured or not.
	/// <param name="mutation"></param>Paramater which lowers amount of healing object receives.
	RespiratoryVirus(std::string, bool, int);
	/// This specific ability decreases immunity.
	/// <returns></returns> random value 0-9.
	int ability();

};
