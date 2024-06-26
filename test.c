#include <stdio.h>
#include <string.h>

void reverse(char* str){
	int len = strlen(str);
	int i,j;
	for(i=0,j=len-1; i<j; i++,j--){
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
//	printf("Reverse string == \n %s\n",str);
	int s=0,e=0;
	while(e < len){
		while(str[e] != ' ' && str[e] != '\0'){
			e++;
		}
		int i,j;
		for(i = s, j = e-1; i<j; i++,j--){
			char temp = str[i];
			str[i] = str[j];
			str[j] = temp;
		}
		s = e+1;
		e = s;
	}
}

int main(){
	char str[100];
	printf("Enter the string == ");
	scanf("%[^\n]s",str);
	/*if(str[strlen(str) - 1] == '\n'){
		str[strlen(str) - 1] = '\0';
	}*/
	reverse(str);
	printf("Reverse the word string == ");
	printf("%s\n",str);
	return 0;
}
