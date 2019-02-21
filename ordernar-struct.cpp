#include <iostream>
using namespace std;

struct Personas{
	int edad; // entre 0 a 100;
	char nombre;
};


int main(){
	Personas persona1, persona2, persona3;

	//Leer la edad de las tres personas 
	leerDatos(persona1);//Alex
	leerDatos(persona2);
	leerDatos(persona3);

	mostrarDatos(persona1);//Dani
	mostrarDatos(persona2);
	mostrarDatos(persona3);

	ordenar(persona1,persona2,persona3);//Carlos

}