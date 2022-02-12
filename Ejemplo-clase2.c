#include <stdio.h>
#include <stdbool.h>  





//FUNCIONES

//PASO POR VALOR
/*
Entrada: valor 1 y valor 2 que son enteros
Salida: suma de los valores que es un entero
Proceso: 
*/
int suma(int a, int b){
	return a + b;
	}


//PASO POR REFERENCIA

void suma2(int  a, int  b, int * valor  ){
	*valor= a+b;
}
















int main(){
	
	//SCANF("Tipo de dato",&VARIABLE);
	/*
	int a; //Se declara la variable
	printf("Ingrese un numero: ");
	scanf("%d",&a); //Se pide por consola la entrada
	printf("El número ingresado es: %d\n",a); // Se muestra el valor almacenado en esa dirección de memoria
	

	//DIRECCIÓN DE MEMORIA
	
	printf("%p\n",&a); //Se muestra la dirección de memoria 
	*/

	//IF ELSE
	/*
	//Se definen los números
	int num1;
	int num2;

	//Se solicita el ingreso de datos
	printf("Ingrese un numero: \n");
	scanf("%d", &num1);
	scanf("%d", &num2);

	if(num1 > num2){
		printf("El numero %d es mayor a %d\n",num1,num2);
	}
	else if(num1 < num2){
		printf("El numero %d es mayor a %d\n",num2,num1);
	}
	else{
		printf("Los numeros son iguales\n");
	}

	*/
	//OTRA FORMA DE VER EL IF ELSE
	/*
	if (num1>num2) printf("El numero %d es mayor a %d\n",num1,num2);
	*/


	//SWITCH

	/* 

	int b;
	printf("Ingrese un numero\n");
	scanf("%d",&b);

	switch(b){
		case 1:
			printf("El valor del numero es 1\n");
			break;
		case 2:
			printf("El valor del numero es 2\n");
		//default:
		//	printf("El numero no es 1 o 2\n");
	}

*/


	//WHILE
	
	bool var = true;
	int var2;
	while(var){
		printf("Ingrese un número\n");
		scanf("%d",&var2);
		if(var2 == 3){
			var = false;
			printf("Terminó\n"); 
		}
	}

	
	
	int i = 0;
	while(i < 10){
		printf("%i\n",i);
		i += 1;
	}
	



   //FOR
	/*
	int count = 10;
	for (int i = 0; i < count; ++i)
	{
		printf("%d\n",i );
	}
	*/



	int valor = 0;
	suma2(10,2,&valor);
	printf("%d\n", valor);

	//





}




