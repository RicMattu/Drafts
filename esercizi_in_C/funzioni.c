// 08 - 01 - 2026

#include<stdio.h>

// definisco i prototipi della funzione

int somma(int a, int b);
int sottrai(int a, int b);
int main(){

	char operando = '+';

	int z,n = 12, m = 10;

	operando = '+';

	switch (operando) {
		case '+':
			z = somma(n,m);
			printf("%d",z);
			break;
		case '-': 
			z = sottrai(n,m);
			printf("%d",z);
			break;
		default : 
			printf("Il simbolo di operazione non è supportato \n");
	}

return 0;
}
int somma(int a, int b){
	return a+b;
};
int sottrai(int a, int b){
	return a-b;

};
