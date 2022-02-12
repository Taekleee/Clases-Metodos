#include <stdlib.h>
#include <stdio.h>
struct alumno{
	char * nombre;
	int edad2;
	char* carrera;
	int ingreso;
};
typedef struct alumno Alumno;


void main(){
	Alumno * alumnos;
	alumnos = (Alumno*)malloc(sizeof(Alumno)*5);
	alumnos[0].edad2 = 5;

	printf("%i\n",alumnos[0].edad2 );


	alumnos[0].nombre = (char*)malloc(sizeof(char*)*30);
	alumnos[0].nombre = "Catalina";
	printf("%s\n",alumnos[0].nombre);

}