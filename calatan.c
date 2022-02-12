#include <stdio.h>

int catalan(int n){
	if(n == 0){
		return 1;
	}
	else{
		return ((2*((2*n)-1)*catalan(n-1))/(n+1));
	}
}



int catalan_cola(int  n, int  numerador, int  denominador){
    if (n < 2){
        return numerador / denominador;
    }
    else{
        return catalan_cola(n - 1, numerador * 2*(2*n - 1), denominador* (n + 1));
    }
}

void main(){
	printf("%i\n",catalan(4) );
	printf("%i",catalan_cola(4,1,1));
}