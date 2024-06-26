#include <stdio.h>

int main(){
	int arr[] = {10,3,5,2,6,7,8,3,9,2,4};
	int i,len;
	len = sizeof(arr)/sizeof(arr[0]);
	int small = arr[0];
	for(int j=0; j<len; j++){
		if(small < arr[j]){
			small = arr[j];
		}
	}
	printf("Big number == %d\n",small);

	printf("size of array == %d\n",len);
	for(i=0; i<len; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
