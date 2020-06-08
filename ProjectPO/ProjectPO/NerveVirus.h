#pragma once
#include "Virus.h"
///This class inherits from Virus.
///Nerve virus is a virus which turn people into hostile zombies.
class NerveVirus :public Virus {
public:
	~NerveVirus();
	/// Constructor which initializes virus parameters.
	/// <param name="iscurable"></param>Parameter which determines if virus can be cured or not.
	/// <param name="mutation"></param>Paramater which lowers amount of healing object receives.
	NerveVirus(string, bool, int);
	/// Special Virus ability which determines if human will be turned to zombie or not.
	/// <returns></returns>1 if succeds, 0 if false.
	int ability();
};
