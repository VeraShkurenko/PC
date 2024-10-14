#include "Mouse.h"

Mouse::Mouse()
{
	model = nullptr;
}

Mouse::Mouse(string m)
{
	model = m;
}

Mouse::Mouse(string m, double p)
{
	model = m;
	price = p;
}

string Mouse::GetModel()
{
	return model;
}

double Mouse::GetPrice()
{
	return price;
}

void Mouse::SetPrice(double pr)
{
	price = pr;
}


