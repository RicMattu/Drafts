/*Prova del primo programma C*/

#include <stdio.h>

int main(){
	int x = 10;
	unsigned int y = 150u;
	long long z = 150000LL;
	_Bool b = 1;
	char c = 'A';
	double  d = 10.50;

	printf("%d %ld\n",x, sizeof(x));
        printf("%d %ld\n",y, sizeof(y));
        printf("%lld %ld\n",z, sizeof(z));
        printf("%d %ld\n",b, sizeof(b));
        printf("%c %ld\n",c, sizeof(c));
        printf("%f %ld\n",d, sizeof(d));

	return 0;

}
