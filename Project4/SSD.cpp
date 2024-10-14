#include "SSD.h"

SSD::SSD()
{
	model = nullptr;
}

SSD::SSD(string m)
{
	model = m;
}

SSD::SSD(string m, double p)
{
	model = m;
	price = p;
}

string SSD::GetModel()
{
	return model;
}

double SSD::GetPrice()
{
	return price;
}

void SSD::SetPrice(double pr)
{
	price = pr;
}

