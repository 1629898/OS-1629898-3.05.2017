#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#define NTHREADS 100


void *do_nothing(void*);

int main(int argc, char *argv[]) {
	pthread_t tid;
	int j;

	for (j = 0; j < NTHREADS; j++) {
		pthread_create(&tid, NULL, do_nothing, NULL);
		pthread_join(tid, NULL);
                int resultado=pthread_self();        	}
}

void *do_nothing(void *null) {
	printf("Hola %d \n", resultado);
	pthread_exit(NULL);
} 
           
