#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *fun(){
	int i;
	while(i<=5){
		sleep(4);
		printf("Thread creation [%d]\n",i);
		i++;
	}
	return NULL;
}

int main(){
	pthread_t p1;
	pthread_create(&p1, NULL, fun, &p1);
	pthread_join(p1, NULL);
	printf("After thread!!!!\n");	
	exit(0);
}
