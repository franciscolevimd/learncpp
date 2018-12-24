#ifndef __PERSONAJE_H__
#define __PERSONAJE_H__

#include <string>

struct DatosPersonaje 
{
	unsigned char  tipo;
	unsigned short estatus;
	unsigned short poder;
	
	std::string *nombre;

	DatosPersonaje()
	{
		this->nombre = new std::string("");

		this->tipo    = 0;
		this->estatus = 25;
		this->poder   = 10;

		*(this->nombre) = "unknown";
	}

	~DatosPersonaje()
	{	
		delete this->nombre;
	}
};

class Personaje
{

public:

	Personaje();
	~Personaje();

	std::string& getNombre();

private:

	DatosPersonaje *datos;

};

#endif
