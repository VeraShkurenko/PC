#include "PC.h"

PC::PC()
{

}

PC::PC(string m, double p, Keyboard* k, Headphohes* h, Monitor* mon, Mouse* ms, RAM r, SSD s) : keyboard(k), headphones(h), monitor(mon), mouse(ms), ram(r), ssd(s)
{
	model = m;
	price = p;

}

double PC::GetPrice()
{
	double fullPrice;
	fullPrice = price + headphones->GetPrice() + keyboard->GetPrice() + monitor->GetPrice() + mouse->GetPrice() + ram.GetPrice() + ssd.GetPrice();
	cout << "Full PC price: " << fullPrice << endl;
	return fullPrice;
}

void PC::Output()
{
	cout <<
		endl << 
		"Headphones: " << headphones->GetModel() << "\t Headphones price: " << headphones->GetPrice() << endl <<
		"Keyboard: " << keyboard->GetModel() << "\t Keyboard price: " << keyboard->GetPrice() << endl <<
		"Monitor: " << monitor->GetModel() << "\t\t Monitor price: " << monitor->GetPrice() << endl <<
		"Mouse: " << mouse->GetModel()  << "\t\t Mouse price: " << mouse->GetPrice() <<  endl <<
		"RAM: " << ram.GetModel() << "\t\t RAM price: " << ram.GetPrice() << endl <<
		"SSD: " << ssd.GetModel() << "\t\t SSD price: " << ssd.GetPrice() << endl <<
		"PC Model: " << model << "\t PC Price: " << price << endl <<
		"Full PC price:" << GetPrice() << endl;

}

