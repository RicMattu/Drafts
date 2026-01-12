// 09-01-2016
#include <stdio.h>

int main(){
	int array[] = {1,2,3,4,5,6,7,8,9,10};
	int *ptr = array; // *ptr = &array[0] <- è equivalente
        
	
	printf("Stampo il valore memorizzato: %d\n",*ptr);
	
	ptr += 3; // ora al quarto elemento
        printf("Se aggiungo 3 al puntatore: %d\n",*ptr);
	
	// operazioni tra i puntatori 
	int *ptr1 = array;
	int *ptr2 = array;
	ptr1 += 2;
	ptr2 += 3;
	int a = ptr2 - ptr1;
        printf("Stampo il valore nuovo memorizzato: %d\n",a);


return 0;

}
