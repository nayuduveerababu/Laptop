#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	while(1){
			printf("***** RED *****\tGREEN IS OFF\tYELLOW IS OFF\t %s\n",__TIME__);
			sleep(5);
			printf("***** GREEN *****\tRED IS OFF\tYELLOW IS OFF\t %s\n",__DATE__);
			sleep(5);
			printf("***** YELLOW *****\tRED IS OFF\tGREEN IS OFF\t %s\n",__TIME__);
			sleep(5);
		}
	
	return 0;
}


