#include <stdio.h>

int main(){
	int a[5];
	int i,j;
	printf("Enter the 6 elements!!!!!!!!!!!!!\n");
	for(i=0; i<=5; i++){
		scanf("%d",&a[i]);
	}
	printf("Printingi Entered array elements!!!!!!!!!!!|\n");
	for(j=0; j<=5; j++){
		printf("Array [%d] == %d\n",j,a[j]);
	}
	return 0;
}
