#pragma once

using namespace std;
#include<iostream>

class Complexe
{
private:
	double Re;
	double Img;

public:
	Complexe(double, double);
	void affichage() const;
	double module() const;
	Complexe conjugue() const;
	Complexe operator+(const Complexe&) const;
	Complexe operator+(const double&) const;
	friend Complexe operator+(const double& d,const Complexe&);
	Complexe operator-(const Complexe&) const;
	Complexe operator-(const double&) const;
	friend Complexe operator-(const double& d, const Complexe&);
	Complexe operator*(const Complexe&) const;
	Complexe operator*(const double&) const;
	friend Complexe operator*(const double& d, const Complexe&);
	Complexe operator/(const Complexe&) const;
	bool operator==(const Complexe&) const;
};

