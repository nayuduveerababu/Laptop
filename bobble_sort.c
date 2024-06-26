#include <stdio.h>

int main(){
	int arr[10] = {1,5,3,0,2,7,9,6,8,4};
	int i,j;
	int len = sizeof(arr)/sizeof(arr[0]);
	printf("Existing array!!!!!!!!!\n");
	for(i=0; i<len; i++){
		printf("%d ",arr[i]);
	}
	for(i=0; i<len-1; i++){
		for(j=0; j<len-i-1; j++){
			if(arr[j] < arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	printf("\nBObble sorted array!!!!!!!!!\n");
	for(int k=0; k<len; k++){
		printf("%d ",arr[k]);
	}
	printf("\n");
	return 0;
}
