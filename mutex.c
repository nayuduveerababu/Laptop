#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

pthread_mutex_t m1 = PTHREAD_MUTEX_INITIALIZER;

void *fun1(){
	int i;
	while(i<=5){
		pthread_mutex_lock(&m1);
		sleep(4);
		printf("Thread creation i == [%d]\n",i);
		pthread_mutex_unlock(&m1);
		i++;
	}
	return NULL;
}

void *fun2(){
	int j;
	while(j<=5){
		pthread_mutex_lock(&m1);
		sleep(2);
		printf("Thread creation j == [%d]\n",j);
		pthread_mutex_unlock(&m1);
		j++;
	}
	return NULL;
}

void *fun3(){
	int k;
	while(k<=5){
		pthread_mutex_lock(&m1);
		sleep(4);
		printf("Thread creation k == [%d]\n",k);
		pthread_mutex_unlock(&m1);
		k++;
	}
	return NULL;
}
void *fun4(){
	int l;
	while(l<=5){
		pthread_mutex_lock(&m1);
		sleep(2);
		printf("Thread creation l == [%d]\n",l);
		pthread_mutex_unlock(&m1);
		l++;
	}
	return NULL;
}

int main(){
	pthread_t p1;
	pthread_t p2;
	pthread_t p3;
	pthread_t p4;
	pthread_mutex_init(&m1, NULL);
	pthread_create(&p1, NULL, fun1, NULL);
	pthread_create(&p2, NULL, fun2, NULL);
	pthread_create(&p3, NULL, fun3, NULL);
	pthread_create(&p4, NULL, fun4, NULL);
	pthread_join(p1, NULL);
	pthread_join(p2, NULL);
	pthread_join(p3, NULL);
	pthread_join(p4, NULL);
	pthread_mutex_destroy(&m1);
	printf("After thread!!!!\n");	
	exit(0);
}
