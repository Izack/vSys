/*
	vSys: Vessel Systems
	Vessel Code Building Blocks for quicker development cycles with complex vessels

	by Scott Zirpolo, aka Izack

	To do:
	-fix git
*/

#include "Orbitersdk.h"

//Failure modes
enum FAILMODE
{
	NOMINAL,
	RESTRICTED,
	NONFUNCTIONAL
};

//Standard vessel component - radiators, power units, engines, etc.
class Component
{
public:
	Component();
	Component(OBJHANDLE *v);
	OBJHANDLE parent;

	//Setter/Getters
	bool SetActivationStatus(bool status);
	bool GetActivationStatus();
	double SetTemperature(double newtemp);
	double GetTemperature();

	//Common functions
	void Iterate(double SimDT);
	void Break();
	void Fix();
private:
	//Common properties
	bool active; //Activation status
	FAILMODE failure_mode;
	double temp; //Temperature in Kelvin
	double dtemp; //change in temperature per second in Kelvin

	DWORD a;
	//Common parameters
	double heat_accumulation; //Heat accumulation/dissipation in K/s
};