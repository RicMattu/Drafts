#include <iostream>

using namespace std;

int main(){
// loop old style
	char nome[] = "Riccardo";

	for (char let:nome){
	cout << let << " ";
	}
	cout << endl;
	for (int let:nome){
	cout << let << " ";
	}
	cout << endl;


return 0;
}
