#include <stdio.h>
#include <string.h>

int main(){
	char str[] = "Hello veera babu";
	printf("%s\n",str);
	int i,l;
	l = strlen(str);
	printf("len = %d\n",l);
	for(i=0; str[i] != '\0'; i++){
		if(str[i] != ' ' && str[i+1] != ' '){
			char ch = str[i];
			str[i] = str[i+1];
			str[i+1] = ch;
			i++;
		}
	}
	printf("%s\n", str);
	return 0;
}
