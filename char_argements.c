#include <stdio.h>

int main(int arg, char *argc[]){
	for(int i=0; i<arg; i++){
		printf("Argument [%d] == %s\n",i+1,argc[i]);
	}
	printf("Task completed!!!!!!!!!!!\n");
	return 0;
}
