#include <stdio.h>
//#include <string.h>

int main(){
	char str[10];
	printf("PLease enter the string!!!!!!!!!\n");
	scanf("%[^\n]s",str);
/*	gets(str);
	for(int i=0; i<=10; i++){
		scanf("%c",str[i]);
	}
	*/
	printf("Printing the Entered string!!!!!!!\n");
	printf("%s\n",str);
	/*puts(str);
	for(int j=0; j<=10; j++){
		printf("%c",str[j]);
	}
	*/
	return 0;
}
