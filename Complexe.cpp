#include "Complexe.h"
#include <cmath>

Complexe::Complexe()
{
}


Complexe::Complexe(double re, double img)
{
	this->Re = re;
	this->Img = img;
}

Complexe::Complexe(const Complexe& c)
{
	this->Re = c.Re;
	this->Img = c.Img;
}

void Complexe::affichage() const
{
	cout << "La partie reel :" << this->Re <<endl;
	cout << "La partie imaginaire :" << this->Img << endl;
}

double Complexe::module() const
{
	return sqrt(pow(this->Re,2) + pow(this->Img, 2));
}

Complexe Complexe::conjugue() const
{
	return Complexe(this->Re, -this->Img);
}

Complexe& Complexe::operator*()
{
	std::cout << "Entrée à operator *  : " << endl;
	return *this; // Retourne une référence à l'objet courant
}

Complexe& Complexe::operator=(const Complexe& C)
{
	this->Re = C.Re;
	this->Img = C.Img;
	return *this;
}


Complexe Complexe::operator+(const Complexe& comp) const
{
	return Complexe(this->Re + comp.Re, this->Img + comp.Img);
}

Complexe Complexe::operator+(const double& d) const
{
	return Complexe(this->Re + d, this->Img);
}

Complexe operator+(const double& d,const Complexe& c)
{
	return Complexe(c.Re + d, c.Img);
}

Complexe Complexe::operator-(const Complexe& c) const
{
	return Complexe(this->Re - c.Re,this->Img - c.Img);
}

Complexe Complexe::operator-(const double& d) const
{
	return Complexe(this->Re - d,this->Img);
}

Complexe operator-(const double& d, const Complexe& c)
{
	return Complexe(d - c.Re,-c.Img);
}

Complexe Complexe::operator*(const Complexe& c) const
{
	return Complexe((this->Re * c.Re) - (this->Img * c.Img),(this->Re * c.Img) + (this->Img * c.Re));
}

Complexe Complexe::operator*(const double& d) const
{
	return Complexe(this->Re * d,this->Img * d);
}

Complexe operator*(const double& d, const Complexe& c)
{
	return Complexe(c.Re * d, c.Img * d);
}

Complexe Complexe::operator/(const Complexe& c) const
{
	//denominateur
    double deno = pow(c.Re,2) + pow(c.Img, 2);

    if (deno == 0) {
        cout << "Erreur : Division par zéro est impossible !" << endl;
		exit(1);
    }
	return Complexe((this->Re * c.Re + this->Img * c.Img) / deno, (this->Img * c.Re - this->Re * c.Img) / deno);
}

bool Complexe::operator==(const Complexe& c) const
{
	return(this->Re == c.Re && this->Img == c.Img);
}


 


