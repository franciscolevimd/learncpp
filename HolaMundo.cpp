#include <iostream>

int main()
{
	// Declaraciones de variables.
	int numero1; // Primer entero a sumar.
	int numero2; // Segundo entero a sumar.
	int suma;

	std::cout << "Escriba el primer número entero: "; // Pide los datos del usuario.
	std::cin >> numero1; // Lee el primer entero del usuario y lo coloca en numero1.

	std::cout << "Escriba el segundo número entero: "; // Pide los datos del usuario.
	std::cin >> numero2; // Lee el segundo entero del usuario y lo coloca en numero2.	

	suma = numero1 + numero2; // Suma los números; almacena el resultado en suma.

	std::cout << "La suma es " << suma << std::endl; // Muestra la sua; fin de li¡ínea.

	return 0;
} // Fin de la función main