// Define la clase LibroCalificaciones con una función miembro llamada mostrarMensaje;
// La función miembro debe recibir un parámetro.
// Crea un objeto LibroCalificaciones y llama a su función mostrarMensaje.
#include <iostream>

using std::cout; 
using std::cin; 
using std::endl;

#include <string> // El programa usa una clase string estándar de C++
using std::string;
using std::getline;


// Definción de la clase LibroCalificaciones
class LibroCalificaciones
{
	public:
		
		// Función que muestra un mensaje de bienvenida para el usuario de LibroCalificaciones.
		void mostrarMensaje(string nombreCurso)
		{
			cout << "Bienvenido al Libro de calificaciones para \n" << nombreCurso << "!" << endl;
		} // Fin de la función mostrarMensaje

}; // Fin de la clase LibroCalificaciones

// La función main empieza la ejecución del programa.
int main()
{
	
	string nombreDelCurso; // Cadena de caracteres que almacena el nombre del curso.
	LibroCalificaciones miLibroCalificaciones; // Crea un objeto LibroCalificaciones llamado miLibroCalificaciones

	// Pide y recibe el nombre del curso como entrada.
	cout << "Escriba el nombre del curso:" << endl;
	getline(cin, nombreDelCurso); // Lee el nombre de un curso con espacios en blanco.
	cout << endl; // Imprime un linea en blanco.

	// Llama a la función mostrarMensaje de miLibroCalificaciones.
	// y pasa nombreDelCurso como argumento.
	miLibroCalificaciones.mostrarMensaje(nombreDelCurso);

	return 0;

} // Fin de main