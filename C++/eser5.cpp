#include <iostream>

using namespace std;

int main(){
// loop old style
int array[] = {28,3,4,421,34};
for (int i=0;i<5;i++){
	cout << array[i] << " ";
}
cout << endl;

// new version
for (int j : array)
	cout << j << " ";
cout << endl;

return 0;
}
