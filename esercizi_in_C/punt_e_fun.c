// 09-01-2016
#include <stdio.h>

void modifica(int *x);

int main(){
// I puntatori possono essere usati come parametro di una funzione
	int a = 10;
	modifica(&a);
	printf("%d\n",a);
return 0;
}

void modifica(int *x){
	*x = *x + *x;
}
