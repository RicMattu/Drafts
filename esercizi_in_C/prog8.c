// 08-01-2026

#include <stdio.h>

int main(){

	char parola[] = "Ri3c4c5ar5do";
	parola[8] = 0;

	int counter1 = 0, counter2 = 0;
	int len = sizeof(parola) / sizeof(char);

	for (int i = 0; i < len; i++){
		if (parola[i] > '0' && parola[i] < '9'){ // ho un numero
			++counter1;
		} else if ((parola[i] > 'a' && parola[i] < 'z') || (parola[i] > 'A' && parola[i] <'Z')){
			++counter2;
		}
	}

	printf("%d \n",counter1);
        printf("%d \n",counter2);

	return 0;

}
