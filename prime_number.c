/*Write a c program to check prime number.
Input: 44
Output: not prime number
Input: 7
Output: prime number   */

#include <stdio.h>

int main(){
	int n;
	printf("Enter the checking prime number or not == ");
	scanf("%d",&n);
	if(n%2 != 0)
		printf("Given Number \"%d\" is prime number!!!!!\n",n);
	else
		printf("Given Number \" %d \" is not a prime number!!!!!!!!\n",n);
	
	return 0;
}
