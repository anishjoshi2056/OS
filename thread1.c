#include <stdio.h>
#include <pthread.h>
// thread function
void *show1(void *u){
	while(1){
		printf("Hello From thread function 1\n");
	}
}
void *show2(void *u){
	while(1){
		printf("Hello From thread function 2\n");
	}
}
int main(){
	pthread_t one,two;
	// thread_id,attributes_of_id,function_of_thread,you want to pass to the thread
	pthread_create(&one,NULL,&show1,NULL);
	pthread_create(&two,NULL,&show2,NULL);
	while(1){
		printf("Hello from main function\n");
	}
	pthread_join(one,NULL);
	pthread_join(two,NULL);

	return 0;
}