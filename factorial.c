/*Factorial
Write a c program to print factorial of a number.
Input: 5
Output: 120
Input: 6
Output: 720 */

#include <stdio.h>

int main(){
	int n,i,sum = 1;
	printf("Enter factorial number  ==  ");
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		sum *= i;
	}
	printf("Factoril of %d number == %d\n",n,sum);
	return 0;
}
