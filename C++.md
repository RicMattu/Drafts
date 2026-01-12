# C++

Bjarne Striustrup (1979)

C with classes  
si basa sul linguaggio C, ispirato a simula (primo linguaggio obj oriented)  
nel 1983 è diventato C++ (incremento di C)  

versione del 2011/14/17 <- corrente (modern C++ da 2011)

```C++
#include <iostream> 

int main(){

        std::cout << "Ciao, C++" <<std::endl;
        return 0;
}
```
endl <- end line (\n)
operatori inserimento stream<- << <<
:: <- scope resoluton operator

## Namespace
servono a evitare conflitti con i nomi (definisce dei macroinsiemi

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




