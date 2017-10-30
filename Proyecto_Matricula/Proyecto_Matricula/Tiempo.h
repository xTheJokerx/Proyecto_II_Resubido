#pragma once
#include<iostream>
#include<sstream>
using namespace std;

class Tiempo {
private:
	int hora;
	int minuto;
public:
	Tiempo();
	Tiempo(int, int);
	~Tiempo();
	int getHora();
	int getMinuto();
	void setHora(int);
	void setMinuto(int);
	string toString();
};