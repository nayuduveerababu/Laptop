#include <stdio.h>
#include <string.h>

char reverse(char str[]){
	int n = strlen(str);
	printf("String length === %d\n",n);
	printf("String === %s\n",str);
	int j,i;
	for(i=0,j=n-1; i<j; i++,j--){
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	printf("Reverse string ==  %s\n",str);
	return str[j];
}

void main(){
	char str[21] = "Hai Veera Babu Nayudu";
	printf("String === %s\n",str);
	char ptr = reverse(str);
	printf("Reverse string ==  %c\n",ptr);
//	return 0;
}
