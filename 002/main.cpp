#include <iostream>

#include "personaje.h"

using std::cout;
using std::endl;


int main (int argc, char **argv)
{
	Personaje *personaje = new Personaje();

	cout << personaje->getNombre() << endl;

	delete personaje;

	return 0;
}