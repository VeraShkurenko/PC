#include "Processor.h"

Processor::Processor()
{
	model = nullptr;
}

Processor::Processor(string m)
{
	model = m;
}

Processor::Processor(string m, double p)
{
	model = m;
	price = p;
}

string Processor::GetModel()
{
	return model;
}

double Processor::GetPrice()
{
	return price;
}

void Processor::SetPrice(double pr)
{
	price = pr;
}



