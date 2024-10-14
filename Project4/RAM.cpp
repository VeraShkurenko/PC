#include "RAM.h"

RAM::RAM()
{
	model = nullptr;
}

RAM::RAM(string m)
{
	model = m;
}

RAM::RAM(string m, double p)
{
	model = m;
	price = p;
}

string RAM::GetModel()
{
	return model;
}

double RAM::GetPrice()
{
	return price;
}

void RAM::SetPrice(double pr)
{
	price = pr;
}

