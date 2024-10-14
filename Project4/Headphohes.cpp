#include "Headphohes.h"

Headphohes::Headphohes()
{
	model = nullptr;
}

Headphohes::Headphohes(string m)
{
	model = m;
}

Headphohes::Headphohes(string m, double p)
{
	model = m;
	price = p;
}

string Headphohes::GetModel()
{
	return model;
}

double Headphohes::GetPrice()
{
	return price;
}

void Headphohes::SetPrice(double pr)
{
	price = pr;
}


