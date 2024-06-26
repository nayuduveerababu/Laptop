#include <stdio.h>

int main(){
	FILE *fp = fopen("text.txt", "r");
	char ch = getc(fp);
	while(ch != EOF){
		printf("%c",ch);
		ch = getc(fp);
	}
	fclose(fp);
	return 0;
}
