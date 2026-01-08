// 08-01-2026

#include <stdio.h>

int main(){
	int arr1[5] ={0,1,2,3,4};
	int arr2[] = {5,4,3,2,1,0};
	
	arr2[2] = arr1[1];
	
	printf("%d \n",arr2[2]);

	return 0;

}
