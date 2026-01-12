// 12-01-2016
#include <stdio.h>

void arr_loop(int*, int);
void arr_loop2(int*, int);

int main(){
	int array[] = {12,13,14,15,16,17,18,19,20};
//	int *ptr = array, *ptr2;
	int len = sizeof(array)/sizeof(int);

	arr_loop(array,len);
	arr_loop2(array,len);

return 0;

}


void arr_loop(int array[], int len){

	for (int i=0;i<len;i++){
		printf("%d\t",array[i]);
	}


}

void arr_loop2(int array[], int len){

	for (int i=0;i<len;i++){
		printf("%d\t",*(array+i));
	}


}
