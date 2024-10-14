#include <iostream>
#include <string>
using namespace std;

#pragma once
class Mouse
{
	string model;
	double price;
public:
	Mouse();
	Mouse(string m);
	Mouse(string m, double p);
	string GetModel();
	double GetPrice();
	void SetPrice(double pr);



};

