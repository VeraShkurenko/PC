#include "Keyboard.h"

Keyboard::Keyboard()
{
	model = nullptr;
}

Keyboard::Keyboard(string m)
{
	model = m;
}

Keyboard::Keyboard(string m, double p)
{
	model = m;
	price = p;
}

string Keyboard::GetModel()
{
	return model;
}

double Keyboard::GetPrice()
{
	return price;
}

void Keyboard::SetPrice(double pr)
{
	price = pr;
}


