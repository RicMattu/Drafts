// 09-01-2016
#include <stdio.h>

int main(){
	int array[] = {1,2,3,4,5,6,7,8,9,10};
	int *ptr = array; // definisco un puntatore all'array (assegna l'indirizzo di arr[0]
	// *ptr = &array[0] <- è equivalente
        printf("Step 1: %d\n",*ptr);
	++ptr; // ora il puntatore punta al secondo elemento dell'array
        printf("Step 2: %d\n",*ptr);
	ptr += 3; // ora al terzo elemento
        printf("Step 1: %d\n",*ptr);



// I puntatori si dichiarano così:
// data-type *identificatore;
	int *pt; // è un puntatore a una var intera quindi acquisirà l'indirizzo di una variabile di questo tipo 
// ora assegno un valore
	int var = 180;
	pt = &var;
// Ora pt punta alla variabile var cioè contiene il suo indirizzo.

//L' operatore di indirezione* si usa DAVANTI all'ident. del puntatore e consente di accedere al valore  contenuto nell'indirizzo

	printf("%d\n",*pt);


return 0;

}
