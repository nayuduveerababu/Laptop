#include <stdio.h>

void reverse(char str[], int l){
	for(int i=0; i<l/2; i++){
		char ch = str[i];
		str[i] = str[l-1-i];
		str[l-i-1] = ch;
	}
}

int main(){
	char str[] = "Hello Veera babu";
	int l;
	while(str[l] != '\0'){
		l++;
	}
	printf("Given string!!!!!!!!\n%s",str);
	reverse(str,l);
	printf("\nReverse string!!!!\n%s\n",str);
	return 0;
}
