// Define la clase LibroCalificaciones con una función miembro llamada mostrarMensaje;
// Crea un objeto LibroCalificaciones y llama a su función mostrarMensaje.
#include <iostream>

using std::cout; 
using std::endl;

// Definción de la clase LibroCalificaciones
class LibroCalificaciones
{
	public:
		// Función que muestra un mensaje de bienvenida para el usuario de LibroCalificaciones.
		void mostrarMensaje()
		{
			cout << "Bienvenido al Libro de calificaciones!" << endl;			
		} // Fin de la función mostrarMensaje
}; // Fin de la clase LibroCalificaciones

// La función main empieza la ejecución del programa.
int main()
{
	LibroCalificaciones miLibroCalificaciones; // Crea un objeto LibroCalificaciones.
	miLibroCalificaciones.mostrarMensaje(); // Llama a la función mostrarMensaje del objeto.
	return 0;
} // Fin de main