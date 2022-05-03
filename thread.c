#include <stdio.h>
#include <pthread.h>

void *show(void *u){
	while(1){
		printf("New Thread\n");
	}
}

int main(){
	pthread_t tid;
	// thread_id,attributes_of_threads,function_for_thread,arguments you want to pass to the thread
	pthread_create(&tid,NULL,&show,NULL);
	while(1){
		printf("Main thread\n");
	}
	// Make main thread to wait for thread function
	pthread_join(tid,NULL);
	return 0;
}

// for compiling thread program you have to supply a thread library
//-lpthread