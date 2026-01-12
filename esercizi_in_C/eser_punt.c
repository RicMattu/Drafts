// 12-01-2016
#include <stdio.h>

int main(){
	int array[] = {12,13,14,15,16,17,18,19,20};
	int *ptr = array, *ptr2;
	int len = sizeof(array)/sizeof(int);
	ptr2 = ptr + len - 1;

	for (int i=0;i<len;i++){
		printf("%d\n",*ptr);
		ptr++;
		printf("%d\n",*ptr2);
		ptr2--;
}

return 0;

}
