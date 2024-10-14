#include <iostream>
#include <string>
using namespace std;

#pragma once
class Monitor
{
	string model;
	double price;
public:
	Monitor();
	Monitor(string m);
	Monitor(string m, double p);
	string GetModel();
	double GetPrice();
	void SetPrice(double pr);


};


