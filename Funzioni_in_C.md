## Definizione di una funzione

int main(void) { // la funzione ritorna un intero
  printf("Hello word");
  return 0; // condizione di salto incondizionato come break, continue e goto
}

return_type  nome_fun(lista inputs o void)  // anche void è un return type ammesso
{
  blocco;
  return espressione;
}

### Signature
> int sum(int x, int y){  
    int z = x + y;  
    return z;  
  }

La signature di questa funzione è (int,int) -> int
_In pratica chiamano signature la definizione della funzione (la seconda riga) delle due attraverso cui normalmente si def. una funzione_

## Invocazione di una funzione
nome_fun(parametri);

I parametri sono diversi dagli argomenti. I primi sono formali ad esempio, nella funzione somma sono x e y, mentre gli argomenti sono quelli
che vengono passati di volta in volta quando la funzione viene chiamata:  
a = sum(2,3)  
e vengono mappati uno a uno nei parametri.

## Prototipo di una funzione
Prima del main inserire:  
int somma(int x, int y);  
poi la funzione si può definire dopo il main

## Argomenti di una funzione
## Variabili locali e globali
## Scope
Lo scope è l'ambito di visibilità (di una variabile o identificatore)  
Esistono 4 livelli:
1. file scope (variabili globali)
2. prototype scope (varibili definite all'interno di un prototipo)
3. function scope (etichette di destinazione di un goto)
4. block scope (identificatore definito all'interno di un blocco, cioè fino alla } che chiude il blocco)
