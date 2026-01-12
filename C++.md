# C++

Inventato da Bjarne Striustrup nel 1979.  
Il nome iniziale sarebbe dovuto essere: _C with classes_, si basa sul linguaggio C, ma è ispirato a simula (primo linguaggio obj oriented).  
Nel 1983 il nome è diventato C++ (incremento di C).  
Esistono varie versioni del 2011/14/17 <- corrente (modern C++ da 2011)
```C++
#include <iostream> 

int main(){

        std::cout << "Ciao, C++" <<std::endl;
        return 0;
}
```
- endl <- end line (\n)  
- operatori inserimento stream <- << <<
- :: <- scope resoluton operator

## Namespace
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
  std::cout << ns2::fun()<<std::endl;
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
### Importare un namespace
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
  std::cout << fun()<<std::endl;
return 0;
}
```
posso anche importare solo elementi specifici:
```C++
using namespace ns1::struct
```
Ed è possibile attribuirgli un alias:
```C++
#include <iostream> 

namespace ns1 {
  int fun() {
    return 2;
  }
}

namespace ns = ns1::mysns

int main(){
  std::cout << fun()<<std::endl;
return 0;
}
```
In pratica è come chiamare una libreria in python
```C++
#include <iostream>

using namespace std;

int main(){

	cout << "Ciao v2" << endl;
	return 0;
}
```
## Stream
Flussi di input output  
caratteristica di c++  

L'idea è generalizzare il concetto input e output

> cout è lo stream di output
> essenziali sono << << gli operatori di inserimento
> manipolatori: endl (inserisce il ritorno a capo nello stream
> cin (acquisire un input)

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
```
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
## Variabili
Anche c++ le variabili vanno dichiarate con il datatype (int myvar;)
Modi di assegnare una variabile  
1. Assignment notation:     int var = 1;
2. Functional notation:     int var(1);
3. Braced notation:         int var {1}; // quello consigliato (da warning anxochè approx 15.2 a 15, ad esempio)

Zero initilization:
int x = 0;  
è equivalente a  
int x {};


## Variabili e literal interi 
- uso degli apici per la leggibilità dei numeri
Formati:
- 0x esadecimale
- 0 ottale
- 0B oppure ob binario

## Boolean
il tipo si scrive
bool e prende valori {true, false}

## Conversioni implicite e esplicite
Gli operandi devono essere tutti dello stesso tipo, in caso di conflitto avviene una conversione automatica  
in C++ si può usare questo tipo di cust:
> static_cast<type>(expression)

## Enumerazioni
```C++
enum class PuntoCardinale{
        Nord, Sud, Ovest, Est
};

PuntoCardinale pc {PuntoCardinale::Est}
```

## Alias per data types
in C era
typedef unsigned int Altezza; 
diventa
using Altezza = unsigned int

## Scope e Lifetime (contesto e ciclo di vita)
Afferiscono a spazio e tempo

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
## Range based for loop

for (iniz; cond; iter) 
        statment

può diventare
```C++
// for (range_decl : range_expres)
//        statement
```




## inferenza automatica di tipo
auto val = 10;
in questo caso l' inizializzazione va fatta subito


- Function overload (area cerchio e area rettangolo)
- parametri con valori di default
- automatic return type (solo se la funzione è def. prima, no prototipo)











