# Classi
Gli oggetti snono entità individuali che appartengono a una classe (sono istanza di una classe)
definisce la struttura generale e il comportamento
es. classe = libro, oggetto = Mille e una notte 

Relazioni tra oggetti e classi = classificazione   
Posso dichiarare sottoclassi a una classe (superclasse) -> generalizzazione (vale solo tra classi)
es. veicolo -> (moto, auto)

### Classe String
```C++
#include <string>
using namespace std;

string nome;
// Abbiamo istanziato un oggetto della classe string

string nome {'Riccardo'};
// Istanziato e inizializzato
```
Per accedere ai mebri di una classe si usa la dot-notation
oggetto.membro; // attributi
oggetto.membro(); // metodi
```
Riccardo.length(); //8
```

### Include guards
Le **Include Guards** (#ifndef, #define, #endif) sono tre direttive che formano una "guardia" che impedisce la definizione multipla della stessa classe. 
#ifndef POINT_2D_H: Significa "if not defined". 
Controlla se l'etichetta POINT_2D_H è già stata definita nel progetto.
#define POINT_2D_H: Se l'etichetta non esiste, la definisce immediatamente e procede a leggere il codice della classe.
#endif: Chiude il blocco iniziato con #ifndef.

A cosa servono?  
Se includi questo file in due parti diverse del tuo programma, 
senza queste righe il compilatore vedrebbe la classe Point2D definita due volte, 
generandoti un errore di "redefinition". Con queste guardie, la seconda volta che il file viene letto, #ifndef risulterà falso e il codice verrà saltato.

## Dichiarazione di una classe

```C++
class NomeClasse {
// Membri (attr e metodi)
};
```
Di default tutti i membri della classe sono **privati**, è possibile specificarlo:
```C++
class <nome>
{
public:
// membri accessibili all'esterno della classe
protected:
// membri accessibili dalla classe ed in tutte le sue derivate
private:
// membri accessibili solo all'interno della classe
}
```


Esempio 1:
```C++
class Persona {
public:
	string nome;
	string cognome;

	void saluta() {
		//
	}
};
```

Esempio 2:
```C++
// point2d.h
#ifndef POINT_2D_H
#define POINT_2D_H
namespace Geometry {
  class Point2D;
}
class Geometry::Point2D
{
public:
  double X();
  void setX(double value);
  double Y();
  void setY(double value);
  double distanceFrom(Point2D other);
private:
  double x;
  double y;
};
#endif // POINT_2D_H
```


## Costruttore 
- è un metodo che si chiamo come la classe;
- non ha valore di ritorno
- ci va inserito il codice che vogliamo venga inserito ogni volta che la classe viene inizializzata (serve per allocare la memoria e inizializzare i gli attributi)
- il costruttore senza argomenti è di default, se non viene definito lo fa in automatico
```C++
// 13/01/2026
// RM
#include <iostream
using namespace std;
class Persona {
public:
	string nome;
	string cognome;

	void saluta() {
		cout << "Ciao da "<< nome << " " << cognome <<endl;
	}

	Persona(){
		nome = "Nome";
		cognome = "Cognome";
	}
};

int main(){
    Persona p;
    p.saluta();
    return 0;
}
```
Esiste un modo equivalente per definire il costruttore esternamente

```C++
#include <iostream
using namespace std;
class Persona {
public:
	string nome;
	string cognome;

	void saluta() {
		cout << "Ciao da "<< nome << " " << cognome <<endl;
	}

	Persona() // qui metto il prototipo
};
Persona::Persona() {
	nome = "Nome";
	cognome = "Cognome";
}
int main(){
    Persona p;
    p.saluta();
    return 0;
}
```
## Overload dei costruttori

class Persona {
public:
	string nome;
	string cognome;
	void saluta() {
		cout << "Ciao da "<< nome << " " << cognome <<endl;
	}
	Persona(){
		nome = "Nome";
		cognome = "Cognome";
	}
	Persona(string p_nome, string p_cognome) {
		nome = p_nome;
		cognome = p_cognome;
	}	
};
Ora posso creare istanze:
int main(){
	// vecchio
    Persona p; //<- se non definisco il costruttore non funziona 
    p.saluta();
	//nuovo
	Persona p2("Riccardo","Mattu");
	p2.saluta()
    return 0;
}


Posso anche formire dei valori di default ai costruttori
class Persona {
public:
	string nome;
	string cognome;
	void saluta() {
		cout << "Ciao da "<< nome << " " << cognome <<endl;
	}
	Persona(){
		nome = "Nome";
		cognome = "Cognome";
	}
	Persona(string p_nome, string p_cognome = "Rossi") {
		nome = p_nome;
		cognome = p_cognome;
	}	
};

## Liste di inizializzazione
UN modo alternativo di fenire un costruttore
```C++
class Persona {
public:
	string nome;
	string cognome;
	void saluta() {
		cout << "Ciao da "<< nome << " " << cognome <<endl;
	}
	Persona(){
		nome = "Nome";
		cognome = "Cognome";
	}
	Persona(string p_nome, string p_cognome = "Rossi")
		: nome(p_nome), cognome(p_cognome){
	}	
};
```

## Distruttori 
Si definisce come il costruttore ma con un ~ davanti
viene invocato autoomaticamente alla fine dello scope 
Quando e perchè dichiararlo?
Se alloco dinamicamente la memoria nel costruttore è bene liberarla con il distruttore.
es.
~Persona(){
// messaggio da visualizzare
}

## Keyword this
- puntatore all'istanza corrente della classe
```C++
class Persona {
public:
	string nome;
	string cognome;
	void saluta() {
		cout << "Ciao da "<< nome << " " << cognome <<endl;
	}
	Persona(){
		nome = "Nome";
		cognome = "Cognome";
	}
	Persona(string p_nome, string p_cognome = "Rossi"){
		this -> nome = nome;
		this -> cognome = cognome;
	}	
};
```

## Keyword default
Posso assegnare dei valori di default anche così, questo non mi costringe a passare i parametri al costruttore
```C++
class Persona {
public:
	string nome = "Nome";
	string cognome = "Cognome";
	void saluta() {
		cout << "Ciao da "<< nome << " " << cognome <<endl;
	}
	Persona() = default;

	Persona(string p_nome, string p_cognome = "Rossi"){
		this -> nome = nome;
		this -> cognome = cognome;
	}	
};
```
## Keyword explicit
conversioni custom

## Costruttori delega

## Copy constructor
Supponiamo di voler assegnare un istanza già inizializzata:
```
int main(){
	Persona p("Mario","Rossi");
	Persona q = p;
	return 0;
}
```
Qua l'assegnazione avviene invocando un copy constructor (di default, in questo caso)

Il copy constructor copia tutti i valori degli attributi (shallow copy), copia superficiale che crea problemi con i puntatori  
cioè il nuovo puntatore punta alla stessa area di memoria 
Noi vogliamo creare una deep copy:


## Membri privati di una classe
```C++
class Persona {
private: // contiene gli attributi
	string nome;
	string cognome;
public:
	void saluta() {
		cout << "Ciao da "<< nome << " " << cognome <<endl;
	}

	Persona(string p_nome, string p_cognome = "Rossi"):
		nome {p_nome}, cognome {p_cognome}{}

};
```
Se un attributo è privato poi non posso modificarlo con
`p.nome = "new name"`

per poter accedere ai nomi in sola lettura si usano gli **Accessor Methods**

```C++
class Persona {
private: 
	string nome;
	string cognome;
public:
	void saluta() {
		cout << "Ciao da "<< nome << " " << cognome <<endl;
	}
//----------------------------------------------------
	string getNome() {return nome; }
	string getCognomeme() {return cognome; }
//----------------------------------------------------
	Persona(string p_nome, string p_cognome = "Rossi"):
		nome {p_nome}, cognome {p_cognome}{}

};
```
A questo punto nel main:
```
int main(){
    Persona p("Riccardo");
	cout << p.getNome() << " " << p.getCognome() <<endl;
	
	return 0;
}
```
Per poterli modificare usiamo dei mutator methods 
```C++
class Persona {
private: 
	string nome;
	string cognome;
public:
	void saluta() {
		cout << "Ciao da "<< nome << " " << cognome <<endl;
	}
//----------------------------------------------------
	string getNome() {return nome; }
	string getCognomeme() {return cognome; }
	void setNome() { this -> nome = nome;}
	void setCognome() { this -> cognome = cognome;}
//----------------------------------------------------
	Persona(string p_nome, string p_cognome = "Rossi"):
		nome {p_nome}, cognome {p_cognome}{}

};
```

```
int main(){
    Persona p("Riccardo");
	p.setCognome("Mattu");
	cout << p.getNome() << " " << p.getCognome() <<endl;
	
	return 0;
}
```

## Variabile const
È possibile definire u oggetto costante:
`const Persona p("Riccardo","Mattu")`
su questa classe non si può usare nessun metodo né accedere a nessun attributo.  
Allora a che serve?
ESistono dei metodi di sola lettura, quindi possiamo dichiarali come const, tanto non cambiano lo stato dell'oggetto
```C++
class Persona {
private: 
	string nome;
	string cognome;
public:
	void saluta() const { // <---------------------------------------------
		cout << "Ciao da "<< nome << " " << cognome <<endl;
	}

	string getNome() const {return nome; } // <---------------------------------------------
	string getCognomeme() const {return cognome; } // <---------------------------------------------
	void setNome() { this -> nome = nome;}
	void setCognome() { this -> cognome = cognome;}


	Persona(string p_nome, string p_cognome = "Rossi"):
		nome {p_nome}, cognome {p_cognome}{}

};
```
Ora i metodi const possono essere usati.  
Con la keybord `mutable` possiamo anche dire che una cosa può essere modificata anche se constante
es. `mutable string name`, quindi anche nel caso metta const il metodo setName, in questo aso posso accedervi.

## Funzioni e classi friend
Delle singole funzioni o classi che possono accedere ai campi private.
```C++
// 14/01/2026
// RM

#include <iostream>
#include <string>

using namespace std;

class Incrementatore {
private:
	int start_value;

public:	
	Incrementatore(int val = 0):start_value {val} {}

	void incrementa() {
		start_value++;
	}

	int getState() {return start_value;}
	void setState(int val) {this -> start_value = val; }

	// mettendo il prototipo faccio in modo che la classe consideri la funzione amica
	friend void friendFunc(Incrementatore& Incrementatore, int x);

};

void friendFunc(Incrementatore& Incrementatore, int x){
	Incrementatore.start_value = x;
}

int main(){
	Incrementatore count(2);
	count.incrementa();
	friendFunc(count, 14);
	cout << count.getState() << endl;

	
	return 0;
}
```

## Array di oggetti 
Analogo a quello che si fa normalmente, si possono passare come elementi o istanze già istanziate o nuove

## Membri Statici
Definire membri condivisi da tutta la classe e non dalla singola istanza.
```C++
class Incrementatore {
private:
	int start_value;

public:
	static int myAttr; // non si può inizializzare direttamente a meno che:
    inline static myAttr = 20;
	Incrementatore(int val = 0):start_value {val} {}

	void incrementa() {
		start_value++;
	}

	int getState() {return start_value;}
	void setState(int val) {this -> start_value = val; }


};

```
## Ereditarietà

```
class Aclass{};

class Bclass: public Aclass{};
```
Bclass è una classe derivata da Aclass (sottoclasse)













