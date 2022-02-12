#include <stdio.h>
#include <stdlib.h>
void main(){
	//ARREGLOS ESTÁTICOS DE ENTEROS
	 
	int array[5]; 
	for (int i = 0; i < 5; ++i){
		//Esto solo lo hace ubuntu
		printf("%d\n",array[i]);
	}

	array[0]= 0;
	array[1]= 1;
	array[2]= 2;
	array[3]= 3;
	array[4]= 4;

	for (int i = 0; i < 5; ++i){
		printf("%d\n",array[i]);
	}

	//ARREGLOS ESTÁTICOS DE CARACTERES
	

	// Comilla simple para caracter y doble para string
	
	char array2[4] = {'h','o','l','a'};
	char array3[50] = "Hola soy un string en un arreglo\n";
	printf("%c", array3);
	


	//ARREGLO DINÁMICO DE ENTEROS

	
	int * arreglo = (int*)malloc(sizeof(int)*4);
	
	for (int i = 0; i < 4; ++i)
	{
		arreglo[i] = i*5;
		printf("%i\n",arreglo[i]);
	}

	//LIBERACIÓN DE MEMORIA

	free(arreglo);
	printf("%d\n",arreglo[2]);
	

	//MATRIZ DINÁMICA (ARREGLO DE ARREGLOS DE 2X2)
	int * arreglo = (int*)malloc(sizeof(int)*4);
	int ** arreglo = (int**)malloc(sizeof(int*)*2);
	
	arreglo[0] = (int*)malloc(sizeof(int)*2);
	arreglo[1] = (int*)malloc(sizeof(int)*2);

	arreglo[0][0] = 0;
	arreglo[0][1] = 1;
	arreglo[1][0] = 2;
	arreglo[1][1] = 3;

	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			printf("%d ",arreglo[i][j] );
		}
		printf("\n");
	}

	

	//ARREGLO DE ARREGLOS DE 2X6 (variación en la asignación de memoria)


	int ** arreglo3 = (int**)malloc(sizeof(int*)*2); //Número de filas
	for (int i = 0; i < 6; ++i){
		arreglo3[i] = (int*)malloc(sizeof(int)*6); //Número de columnas
	}
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 6; ++j)
		{
			arreglo3[i][j] = j*2 + i;
			printf("%d ",arreglo3[i][j] );
		}
		printf("\n");
	}
	
	char string[20];
	int string2;
	scanf("%s", string);



}