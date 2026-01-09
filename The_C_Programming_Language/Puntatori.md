# Introduzione ai puntatori 
Ricordiamo che una variabile è uno spazio di memoria e quando la dichiariamo stiamo assegnando un nome allo spazio di memoria stesso che può contenere un valore di un certo tipo.  

> ES.  
Supponiamo che il nostro calcolatore riservi uno spazio di memoria di 4 byte per ogni int (si può verificare semplicemente plottando sizeof(int)).  
Ad esempio i bytes 9472, ... , 9475.  
Allora quando scriviamo: int my_var = 180;  
> my_var accederà automaticamente alla prima posizione (9472).

Un puntatore è una variabile che contiene l'indirizzo di memoria di un'altra variabile:  
int my_var = 180; // var. intera 
int *my_ptr; // dichiaro una variabile puntatore a intero
my_ptr = &my_var; // assegno al puntatore l'indirizzo di memoria della variabile (es. 9472)

## Indirezione
L'operatore * permette di vedere il valore della variabile alla quale punta il puntatore  
printf("%d",my_ptr) // 9472
printf("%d",*my_ptr) // 180

## Puntatori e parametri delle funzioni
### Es.1-----------------------------------------------------------------
int main(){
  int a = 10;
  modifica(a); 
  printf("%d",a); // a = 10
}
void modifica(int x) {
  x = x + 1 //a = 11
  }

### Es.2------------------------------------------------------------
int main(){
  int a = 10;
  modifica(&a); // la funzione prende come argomento l'indirizzo in cui si trova a (es. 9472)
  printf("%d",a); // a = 11
}

void modifica(int *x) {
  *x = *x + 1 //prende il valore cont. nell'indirizzo (10) aggiunge 1 e lo assegna come valore all'indirizzo memorizzato in x
  }

  
## Puntatori e array
## Aritmetica dei puntatori



