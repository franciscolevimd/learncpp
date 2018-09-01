// Define la clase LibroCalificaciones que contiene un miembro de datos
// nombreCurso y funciones miembro para establecer y obtener su valor;
// Crea y manipula un objeto LibroCalificaciones.
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

		// Función que establece el nombre del curso
		void establecerNombreCurso(string nombre)
		{
			nombreCurso = nombre; // Almacena el nombre del curso objeto. 
		} // Fin de la función establecerNombreCurso.
		
		// Función que obtiene le nombre del curso .
		string obtenerNombreCurso()
		{
			return nombreCurso; // Devuelve el nombreCurso del objeto.
		} // Fin de la función ontenerNombreCurso.

		// Función que muestra un mensaje de bienvenida.
		void mostrarMensaje(string nombreCurso)
		{
			
			// Esta instrucción llama a obtenerNombreCurso para obtener el
			// nombre del curso que representa este LibriCalificaciones
			cout << "Bienvenido al Libro de calificaciones para \n" << obtenerNombreCurso() << "!" << endl;

		} // Fin de la función mostrarMensaje.

	private:

		string nombreCurso; // Nombre del curso para este LibroCalificaciones.

}; // Fin de la clase LibroCalificaciones

// La función main empieza la ejecución del programa.
int main()
{
	
	string nombreDelCurso; // Cadena de caracteres que almacena el nombre del curso.
	LibroCalificaciones miLibroCalificaciones; // Crea un objeto LibroCalificaciones llamado miLibroCalificaciones

	// Muestra el valor inicial de nombreCurso
	cout << "El nombre inicial del curso es: " << miLibroCalificaciones.obtenerNombreCurso() << endl;

	// Pide, recibe y establece el nombre del curso.
	cout << "\nEscriba el nombre del curso: " << endl;
	getline(cin, nombreDelCurso); // Lee el nombre de un curso con espacios en blanco.
	miLibroCalificaciones.establecerNombreCurso(nombreDelCurso); // Establece el nombre del curso.
	
	cout << endl; // Imprime una línea en blanco.
	miLibroCalificaciones.mostrarMensaje(nombreDelCurso); // Muestra un mensaje con el nuevo nombre del curso.

	return 0; // Indica que terminó correctamente.

} // Fin de main