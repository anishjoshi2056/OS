#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

volatile long int a = 0;
pthread_mutex_t lock;
void threadFunc1(void *arg){
	int i;
	long int localA = 0;

	for(i = 1;i < 100000000;i++){
		
		localA = localA + i;
		
	}
	pthread_mutex_lock(&lock);
	a = a + localA;
	pthread_mutex_unlock(&lock);
}

void threadFunc2(void *arg){
	int i;
	long int localA = 0;

	for(i = 100000000;i< 200000000;i++){
		localA = localA +i;
	}
	pthread_mutex_lock(&lock);
	a = a + localA;
	pthread_mutex_unlock(&lock);

}
void threadFunc3(void *arg){
	int i;
	long int localA = 0;

	for(i = 200000000;i < 300000000;i++){
		
		localA = localA + i;
		
	}
	pthread_mutex_lock(&lock);
	a = a + localA;
	pthread_mutex_unlock(&lock);
}

void threadFunc4(void *arg){
	int i;
	long int localA = 0;

	for(i = 300000000;i< 400000000;i++){
		localA = localA +i;
	}
	pthread_mutex_lock(&lock);
	a = a + localA;
	pthread_mutex_unlock(&lock);

}
void threadFunc5(void *arg){
	int i;
	long int localA = 0;

	for(i = 400000000;i < 500000000;i++){
		
		localA = localA + i;
		
	}
	pthread_mutex_lock(&lock);
	a = a + localA;
	pthread_mutex_unlock(&lock);
}

void threadFunc6(void *arg){
	int i;
	long int localA = 0;

	for(i = 500000000;i< 600000000;i++){
		localA = localA +i;
	}
	pthread_mutex_lock(&lock);
	a = a + localA;
	pthread_mutex_unlock(&lock);

}
void threadFunc7(void *arg){
	int i;
	long int localA = 0;

	for(i = 600000000;i < 700000000;i++){
		
		localA = localA + i;
		
	}
	pthread_mutex_lock(&lock);
	a = a + localA;
	pthread_mutex_unlock(&lock);
}

void threadFunc8(void *arg){
	int i;
	long int localA = 0;

	for(i = 700000000;i< 800000000;i++){
		localA = localA +i;
	}
	pthread_mutex_lock(&lock);
	a = a + localA;
	pthread_mutex_unlock(&lock);

}
void threadFunc9(void *arg){
	int i;
	long int localA = 0;

	for(i = 800000000;i < 900000000;i++){
		
		localA = localA + i;
		
	}
	pthread_mutex_lock(&lock);
	a = a + localA;
	pthread_mutex_unlock(&lock);
}

void threadFunc10(void *arg){
	int i;
	long int localA = 0;

	for(i = 900000000;i<=1000000000;i++){
		localA = localA +i;
	}
	pthread_mutex_lock(&lock);
	a = a + localA;
	pthread_mutex_unlock(&lock);

}
int main(int argc,char **argv){
	pthread_t one,two,three,four,five,six,seven,eight,nine,ten;
	int i;
	a = 0;
	pthread_create(&one,NULL,(void*)&threadFunc1,NULL);
	pthread_create(&two,NULL,(void*)&threadFunc2,NULL);
	pthread_create(&three,NULL,(void*)&threadFunc3,NULL);
	pthread_create(&four,NULL,(void*)&threadFunc4,NULL);
	pthread_create(&five,NULL,(void*)&threadFunc5,NULL);
	pthread_create(&six,NULL,(void*)&threadFunc6,NULL);
	pthread_create(&seven,NULL,(void*)&threadFunc7,NULL);
	pthread_create(&eight,NULL,(void*)&threadFunc8,NULL);
	pthread_create(&nine,NULL,(void*)&threadFunc9,NULL);
	pthread_create(&ten,NULL,(void*)&threadFunc10,NULL);


	pthread_join(one,NULL);
	pthread_join(two,NULL);
	pthread_join(three,NULL);
	pthread_join(four,NULL);
	pthread_join(five,NULL);
	pthread_join(six,NULL);
	pthread_join(seven,NULL);
	pthread_join(eight,NULL);
	pthread_join(nine,NULL);
	pthread_join(ten,NULL);



	printf("%ld\n",a);
	return 0;
}