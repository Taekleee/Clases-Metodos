#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


void red () {
  printf("\033[1;31m\033[7;31m");
}

void green(){
  printf("\033[1;42m\033[7;31m");
}
void yellow() {
  printf("\033[1;33m\033[7;37m");
}

void reset () {
  printf("\033[0m");
}

void llenarSopa(char ** sopa, int count){
	for (int i = 0; i < count; ++i)
	{
		for (int j = 0; j < count; ++j)
		{
			sopa[i][j] = (rand()%(90-65))+65;
		}
	}

}

void llenarSopaSecundaria(int ** sopaSecundaria, int count){
	for (int i = 0; i < count; ++i)
	{
		for (int j = 0; j < count; ++j)
		{
			sopaSecundaria[i][j] = 0;
		}
	}

}

void printSopaSecundaria(int ** sopaSecundaria, int count){
	for (int i = 0; i < count; ++i)
	{
		for (int j = 0; j < count; ++j)
		{
			printf("%i ", sopaSecundaria[i][j]);
		}
		printf("\n");
	}
}
void printSopa(char ** sopa, int** sopaSecundaria, int count){
	int posX = 0;
	for (int i = 0; i < count; ++i){
		for (int j = 0; j < count; ++j){
			if (posX == 0){
				printf("  ");
				for (int k = 0; k < count; ++k){
					red();
					printf("%i ",k);
					posX = 1;
				}
				printf("\n");
			}
			if(j == 0){
				red();
				printf("%i ",i);
			}
			if(sopaSecundaria[i][j] == 1){
				red();
				printf("%c ", sopa[i][j]);
			}
			else{
				yellow();
				printf("%c ", sopa[i][j]);
			}			
			
			}
		printf("\n");
		}
		
	}
void cambiarColor(int ** sopaSecundaria, int xInitial, int yInitial, int xFinal, int yFinal){
	for (int i = xInitial; i <= xFinal; ++i)
	{
		for (int j = yInitial; j <= yFinal; ++j)
		{
			//printf("i: %i - j: %i ", i,j);
			sopaSecundaria[i][j] = 1;
		}
		printf("\n");
	}
}

void ingresarCoordenadas(int * xInitial, int * xFinal, int * yInitial, int * yFinal){
	printf("Pos. inicial eje X: ");
	scanf("%i",xInitial);
	printf("\nPos. final eje X: ");
	scanf("%i",xFinal);
	printf("\nPos. inicial eje Y: ");
	scanf("%i",yInitial);
	printf("\nPos. final eje Y: ");
	scanf("%i",yFinal);
}

int main () {
	//srand(time(NULL)); 
	int count = 10;
	//Matriz que se muestra por pantalla
	char ** sopa = (char**)malloc(sizeof(char*)*10);
	for (int i = 0; i < count; ++i){
		sopa[i] = (char*)malloc(sizeof(char)*10);
	}

	//Otra matriz
	int ** sopaSecundaria = (int**)malloc(sizeof(int*)*10);
	for (int i = 0; i < count; ++i){
		sopaSecundaria[i] = (int*)malloc(sizeof(int)*10);
	}

	llenarSopa(sopa,count);
	llenarSopaSecundaria(sopaSecundaria,count);
	printSopa(sopa, sopaSecundaria,count);
	int xInitial = 0;
	int yInitial = 0;
	int xFinal = 0;
	int yFinal = 0;
	int count2 = 0;
	while(true){
	
		
		ingresarCoordenadas(&xInitial, &xFinal, &yInitial, &yFinal);
		cambiarColor(sopaSecundaria,  xInitial,  yInitial,  xFinal,  yFinal);
		printSopa(sopa,sopaSecundaria,count);
		//wait(10);
    	system("cls");
		//printSopaSecundaria(sopaSecundaria,count);
		//gotoxy(1, 1);
		// reset();

		
	}
	
  return 0;
}