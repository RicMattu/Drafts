// 12-01-2016
// PUNTATORI A FUNZIONI
#include <stdio.h>

int somma(int,int);
int diff(int,int);

int main(){
	int a = 2, b = 34;
// dichiaro il puntatore a funzione
//	[tipo immagine] (*nome puntatore) (parametri)
	int (*ptr_fun) (int,int);

// assegno 
	ptr_fun = somma;

	printf("%d\n",ptr_fun(a,b));
	ptr_fun = diff;
	printf("%d\n",ptr_fun(a,b));


return 0;

}
