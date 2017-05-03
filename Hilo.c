#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <pthread.h>

#define MAXTHREAD 128

long countarray[MAXTHREAD];
int chunksize;


void* worktodo(void* arg) {
	int id = (int)arg;
	int i;
	countarray[id] = 0;
	for (i = id*chunksize; i < (id+1)*chunksize; i++) {
		printf("mensaje desde el hilo\n");
		pthread_exit(NULL);
			countarray[id]++;
	}
	return NULL;
}

