#include <stdio.h>
#include <stdlib.h>

int division(int * lista, int indiceInicial, int indiceFinal){
	if(indiceFinal != indiceInicial){
		//Se calcula el valor medio para obtener los índices iniciales 
		//y finales
		int medio = indiceInicial + (indiceFinal-indiceInicial)/2;
		division(lista,indiceInicial,medio);
		division(lista, medio +1, indiceFinal);

	}
	else{
		//printf("%i\n",indiceFinal );
		//printf("%i\n",lista[indiceFinal] );
		if(indiceFinal == lista[indiceInicial]){
			printf("Verdadero\n");
			return indiceFinal;
		}
		else{
			printf("Falso\n");
			return indiceFinal;
		}
	}
}

int main(){
	int * arreglo = (int*)malloc(sizeof(int)*5);
	arreglo[0] = 2;
	arreglo[1] = 3;
	arreglo[2] = 4;
	arreglo[3] = 5;
	arreglo[4] = 4;
	division(arreglo, 0, 4 );

	return 0;
}