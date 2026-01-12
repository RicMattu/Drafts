// 09-01-2016
#include <stdio.h>

int main(){
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
