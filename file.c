#include <stdio.h>

int main(){
	int i=0;
	FILE *fp = fopen("text.txt", "w");
	while(i<10){
		//gets(str);
		fprintf(fp,"Hello veera!!!!!!!\n");
		i++;
	}
	return 0;
}
