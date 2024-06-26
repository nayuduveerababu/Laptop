#include <stdio.h>

int main(){
	int arr[] = {10,1,3,5,2,6,7,8,3,9,2,4};
	int i,len;
	len = sizeof(arr)/sizeof(arr[0]);
	printf("Before array sorting!!!!!!!!!!!\n");
	/*for(i=0; i<len; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	*/
	for(int j=0; j<len; j++){
		for(int k=i; k<len; k++){
		if(arr[k] < arr[k+1]){
			int temp = arr[k];
			arr[k] = arr[k+1];
			arr[k+1] = temp;
		}
		}
	}
	printf("size of array == %d\n",len);
	printf("After array sorting!!!!!!!!!!\n");
	for(i=0; i<len; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
