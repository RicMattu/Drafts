// 08-01-2026

#include <stdio.h>

int main(){

	enum punti_cardinali {
		NORD = 0,
		SUD = 1,
		EST = 10,
		OVEST = 11
	} p1;

	p1 = OVEST;

	printf("%d \n",p1);
	return 0;

}
