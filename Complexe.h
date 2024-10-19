#pragma once

using namespace std;
#include<iostream>

class Complexe
{
private:
	double Re;
	double Img;

public:
	Complexe();
	Complexe(double, double);
	Complexe(const Complexe&);
	void affichage() const;
	double module() const;
	Complexe conjugue() const;
	Complexe& operator*();
	Complexe& operator=(const Complexe&);
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

