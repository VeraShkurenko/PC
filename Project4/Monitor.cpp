#include "Monitor.h"

Monitor::Monitor()
{
	model = nullptr;
}

Monitor::Monitor(string m)
{
	model = m;
}

Monitor::Monitor(string m, double p)
{
	model = m;
	price = p;
}

string Monitor::GetModel()
{
	return model;
}

double Monitor::GetPrice()
{
	return price;
}

void Monitor::SetPrice(double pr)
{
	price = pr;
}


