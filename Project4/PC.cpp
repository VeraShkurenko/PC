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
	return 0.0;
}

void PC::Output()
{
	cout << "Model: " << model <<
	"Price: " << price <<
		"Headphones: " << headphones->GetModel() <<
		""

		
		<< endl;

}
