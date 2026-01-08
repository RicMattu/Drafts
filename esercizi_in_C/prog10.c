// 08-01.2026

#include<stdio.h>

int main(){

	int array[] = {1, 3, 45, 67, 34, 76, 91};
	
	int len = sizeof(array) / sizeof(int);
	
	int i = 0;
	do {
		if (array[i] % 2 == 0)
			break;
		} while (++i < len);

	if (i == len){
		printf("Non ci sono numeri pari");
	}

	printf("%d",array[i]);

	return 0;
}
