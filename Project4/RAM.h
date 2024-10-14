#include <iostream>
#include <string>
using namespace std;

#pragma once
class RAM
{
	string model;
	double price;
public:
	RAM();
	RAM(string m);
	RAM(string m, double p);
	string GetModel();
	double GetPrice();
	void SetPrice(double pr);


};

