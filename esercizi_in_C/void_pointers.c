// 12-01-2016
// Puntatori void
#include <stdio.h>

int main(){
	void *ptr;
	// ora ho definito il ptr ma se lo uso così non posso accedere al valore
	int a = 50;
	ptr = &a;
	printf("%d\n",*( (int *) ptr));

return 0;

}
