/*Write a c program to check palindrome number.
Input: 329
Output: not palindrome number
Input: 12321
Output: palindrome number */
#include <stdio.h>

int main(){
	int n,rem,sum=0,temp;
	printf("Enter Palindrome checking number == ");
	scanf("%d",&n);
	temp = n;
	while(n>0){
		rem = n%10;
		sum = (sum*10) + rem;
		n = n/10;
	}
	printf("%d\n",sum);
	if(sum == temp)
		printf("Entered %d number is palindrome number\n",temp);
	else
		printf("Entered %d number is not a palindrome number\n",temp);
	return 0;
}
