/*Fibonacci number series 
 *example : 0 1 1 2 3 5 8 13 
        0 1 0+1 1+1 1+2 2+3  
 */

#include <stdio.h>

int main(){
	int number;
	printf("Enter the maximum number limit == ");
	scanf("%d",&number);
	int i,a=0,b=1,temp;
	printf("Fibonacci series of %d numbers!!!!!!!!\n",number);
	printf("%d %d ",a,b);
	for(i=1; i<number; i++){
		temp = a+b;
		printf("%d ",temp);
		a = b;
		b = temp;
	}
	printf("\n");
	return 0;
}
