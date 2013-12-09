#include "vSys.h"

class Radiator: public Component
{
public:
	Radiator();
	Radiator(OBJHANDLE *v);
	void Iterate(double SimDT);
private:
	double area; //Area in square metres
};