// 08-01-2026

#include <stdio.h>
#include <string.h>
int main(){

	typedef	struct {
			char titolo[50];
			char autore[50];
		} Intestazione;

        typedef struct {
                        char titolo[50];
                        int numero_pagine;
                } Capitolo;

	int n = 2;	
	typedef struct  {
		Intestazione intestazione;
		Capitolo capitoli[n];
		} Libro; 

	Libro libro;
	strcpy(libro.intestazione.titolo,"Cent'anni di solitudine");
	strcpy(libro.intestazione.autore, "Gabriel Garcia Marquez");
	strcpy(libro.capitoli[0].titolo,"capitolo 1");
	libro.capitoli[0].numero_pagine = 10;
	strcpy(libro.capitoli[1].titolo,"capitolo 2");
        libro.capitoli[1].numero_pagine = 20;

	printf("L'autore del libro è %s \n",libro.intestazione.autore);
	printf("Il secondo capitolo ha %d pagine\n",libro.capitoli[1].numero_pagine);
	return 0;

}
