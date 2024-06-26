#include <stdio.h>

int main(){
	FILE *fp = fopen("text.txt", "w");
	char ch;
	printf("Enter the string == ");
	ch = getc();
	while(ch != EOF){
		fputc(ch, fp);
		ch = getchar(fp);
	}
	fclose(fp);
	return 0;
}
