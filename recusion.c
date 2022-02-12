#include <stdio.h>
int cubos(int n, aux){
	if(n==1){
		printf("Retorno caso base\n");
		return aux;
	}
	else{
		printf("%i + cubos(%i - 1)\n", n, n);
		return n + cubos(n-1);
	}
}


int suma(int n){
	if(n/10 == 0){
		return n;
	}
	else{
		return n%10 + suma(n/10);
	}
}

void main(){
	printf("%i",cubos(4));

	//printf("%i",suma(42550));
	
}