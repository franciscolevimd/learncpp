#include "personaje.h"


Personaje::Personaje()
{
	this->datos = new DatosPersonaje;
}

Personaje::~Personaje()
{
	delete this->datos;
}


std::string& Personaje::getNombre()
{
	return *(this->datos->nombre);
}