/*
	vSys: Vessel Systems
	Vessel Code Building Blocks for quicker development cycles with complex vessels

	by Scott Zirpolo, aka Izack
*/

#include "Orbitersdk.h"

//Standard vessel component - radiators, power units, engines, etc.
class Component
{
public:
	//Common properties
	bool active; //Activation status
	double temp; //Temperature in Kelvin
	double dtemp; //change in temperature per second in Kelvin

	//Common functions
	void Iterate(double SimDT);
};