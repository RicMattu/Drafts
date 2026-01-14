# C++
## 1) Introduzione
Inventato da Bjarne Striustrup nel 1979.  
Il nome iniziale sarebbe dovuto essere: _C with classes_, si basa sul linguaggio C, ma è ispirato a simula (primo linguaggio obj oriented).  
Nel 1983 il nome è diventato C++ (incremento di C).  
Esistono varie versioni del 2011/14/17 <- corrente (modern C++ da 2011).  
Il primo classico programma è:
```C++
#include <iostream> 

int main(){

        std::cout << "Ciao, C++" <<std::endl;
        return 0;
}
```
dove:
1. _endl_ significa end line (\n)
2. _<< <<_ sono gli operatori inserimento stream  
3. :: è lo scope resoluton operator

## 2) Namespace
Servono a evitare conflitti con i nomi (definisce dei macroinsiemi)
```C++
#include <iostream> 

namespace ns1 {
  int fun() {
    return 1;
  }
}

namespace ns2 {
  int fun() {
    return 2;
  }
}

int main(){
  std::cout << ns2::fun() << std::endl;
return 0;
}
```
si possono nidificare in due modi equivalenti
```C++
namespace ns1 {
  namespace ns2 {
    int fun() {
      return 1;
    }
  }
}
// dal 2017 in poi
namespace ns1::ns2 {
  int fun() {
    return 2;
  }
}
```
### 2.1) Importare un namespace
localmente o globalmente
```
using namespace ns1
```
mi permette di passare da

```C++
#include <iostream> 

namespace ns1 {
  int fun() {
    return 2;
  }
}

int main(){
  std::cout << ns2::fun()<<std::endl;
return 0;
}
```
a 
```C++
#include <iostream> 

namespace ns1 {
  int fun() {
    return 2;
  }
}

using namespace ns1

int main(){
  std::cout << fun() << std::endl;
return 0;
}
```
posso anche importare solo elementi specifici:
```C++
using namespace ns1::struct
```
Ed è possibile attribuirgli un alias, come segue:
```C++
#include <iostream> 

namespace ns1 {
  int fun() {
    return 2;
  }
}
// [namespace alias = ..]
namespace ns = ns1::mysns

int main(){
  std::cout << fun()<<std::endl;
return 0;
}
```
È quasi come chiamare una libreria in python
```C++
#include <iostream>

using namespace std;

int main(){

	cout << "Ciao v2" << endl;
	return 0;
}
```
## 3) Stream
Gli stream sono flussi di input output, sono una caratteristica di C++.  
L'idea è generalizzare il concetto input e output:
- _cout_ è lo stream di output
- essenziali sono << << gli operatori di inserimento
- manipolatori: _endl_ (inserisce il ritorno a capo nello stream)
- _cin_ (acquisire un input)

Esempio
```C++
#include <iostream>

using namespace std;

int main(){

	int numero;

	cout << "Inserisci un numero" <<endl;
	cin >> numero;
	cout << numero << endl;
}

```
In questo esempio usiamo la libreria _string_ (vedi ...)
```C++
#include <iostream>
#include <string>

using namespace std;

int main(){

	string mystring;
	cout << "Inserisci una parola" <<endl;
	cin >> mystring;
	cout << "La stringa è"<<endl<< mystring<< endl;
}
```
## 4) Variabili
Anche in C++ le variabili vanno dichiarate con il datatype (int myvar;), ma esistono vari
modi di assegnare una variabile:
1. Assignment notation:     `int var = 1;`
2. Functional notation:     `int var(1);`
3. Braced notation:         `int var {1}; // quello consigliato`

L'ultimo è quello consigliato perchè ad esempio da warning anzichè approx 15.2 a 15.

### 3.1) Zero initilization:
Sono equivalenti:
- `int x = 0`;  
- `int x {}`;

## 5) Variabili e literal interi 
1. In C++ è ammesso l'uso degli apici per la leggibilità dei numeri
2. Oltre ai formari già noti:
	- 0x esadecimale
	- 0 ottale
è ammesso:
	- 0B oppure ob binario

## 6) Boolean
La notazione per il tipo  si indica con `bool` e prende valori `{true, false}`

## 7) Conversioni implicite e esplicite
Gli operandi devono essere tutti dello stesso tipo, in caso di conflitto avviene una conversione automatica  
in C++ si può usare questo tipo di cust:
`static_cast <type> (expression)`

## 8) Enumerazioni
```C++
enum class PuntoCardinale{
        Nord, Sud, Ovest, Est
};

PuntoCardinale pc {PuntoCardinale::Est}
```

## 9) Alias per data types
in C era
`typedef unsigned int Altezza;`
diventa
`using Altezza = unsigned int`

## 10) Scope e Lifetime (contesto e ciclo di vita)
Afferiscono a spazio e tempo, come in C:
1. automatic storage duration (locali)
2. static storage duration (globali)
3. dynamic storage duration (esistono fino al termine del programma o finchè vengono cancellate)
4. thread storage duration (per la programmazione multiyhread)
```C++
 #include <iostream>

int x; // assegnata di default a 0 (Globale)

using namespace std;

int main(){
        int x {10}; // locale
        cout << "Valore Globale:"<<::x<<endl;
        cout << " V. Locale: " < x endl;

 return 0;
}
```
## 11) Range based for loop
Oltre al classico ciclo for in C,
```C
for (iniz; cond; iter) 
	\\ statment
```
si può fare:
```C++
// for (range_decl : range_expres)
//        statement
```
------------------------

## inferenza automatica di tipo
auto val = 10;
in questo caso l' inizializzazione va fatta subito


- Function overload (area cerchio e area rettangolo)
- parametri con valori di default
- automatic return type (solo se la funzione è def. prima, no prototipo)

## Allocazione dinamica della memoria
in C++ abbiamo gli operatori _new_ e _delete_
```
type *ptr = new type;
type *ptr = new type[n_el]; // per gli array
```
Per liberare l'area di memoria si usa:
```
delete ptr;
```
L'operatore delete funziona solo per la memoria allocata dinamicamente attraverso l'operatore new.  
Per liberare invece la memoria allocata per un array si usa:
```
type *ptr = new type[n_el]; // per gli array
delete[] ptr;
```

## Reference
Un reference è un alias per una variabile  
La differenza consiste nel fatto che una variabile reference non ha una locazione di memoria propria, ma punta a quella di una variabile ordinaria già esistente. Per questo motivo, l'inizializzazione deve avvenire contestualmente alla dichiarazione come mostrato nell'esempio seguente:
```C++
int a = 1;
int& ref_a = a;
int b = 2;
ref_a = b; // Errore: non possiamo cambiare il riferimento dopo la dichiarazione!
int& r; // Errore: una variabile reference deve essere inizializzata!
```
### Reference come params
1. Anzichè passare il valore per copia, passo l valore come reference cioè l'indirizzo di memoria, così le funzioni lavoraro sugli argomenti.
```
// Prima
RetType fun(type par);
RetType x = fun (args);

// Ora
RetType fun(type& par);
RetType x = fun(args);

```
### Reference costanti

## Object - Orentation:

- Programmazione procedurale:  
Dati - Funzioni  
il C funziona solo così

- Programmazione OO:
Oggetti - Classi
Dati e funzioni sono in generale Oggetti
gli oggetti hanno attributi (dati) e metodi (funzioni)

Un oggetto è dotato di 
1. Stato
2. Comportamento
3. Identità

### Stato  
- Ogni oggetto contiene degli attributi (titolo, numero pagine, ecc..)
- I valori possono cambiare
- Lo stato è l'inisieme dei valori degli attributi di un oggetto a un certo istante
- Lo stato solitamente è privato (information hiding)

### Comportamento
- Insieme di operazioni che l'oggettto può svolgere
- operazioni che sa svolgere
- operazioni che conosce
- Possono esssere pubblicge o private

### Identità
- Ogni oggetto deve avere degli attributi che costituiscono la sua identità
- (fatta in automatico)

  
