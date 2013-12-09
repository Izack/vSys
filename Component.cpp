#include "vSys.h"

Component::Component()
{
	parent = NULL;
}

Component::Component(OBJHANDLE *v)
{
	parent = v;
}

bool Component::SetActivationStatus(bool status)
{
	active = status;
	return active;
}

bool Component::GetActivationStatus()
{
	return active;
}

void Component::Iterate(double SimDT)
{

}