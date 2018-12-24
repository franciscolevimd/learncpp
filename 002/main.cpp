#include <iostream>

#include "personaje.h"

using std::cout;
using std::endl;
using namespace learningcpp;


int main (int argc, char **argv)
{
	videogame::Personaje *personaje = new videogame::Personaje();

	cout << personaje->getNombre() << endl;

	delete personaje;

	return 0;
}