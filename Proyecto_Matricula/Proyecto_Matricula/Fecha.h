#pragma once
#include<iostream>
#include<sstream>
using namespace std;

class Fecha {
private:
	string dia;
public:
	Fecha();
	Fecha(string);
	~Fecha();
	void setDia(string);
	string getDia();
	string toString();

};