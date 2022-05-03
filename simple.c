#include <stdio.h>
int main(){
	long int sum = 0;
	int i;
	for(i =1;i<=1000000000;i++){
		sum = sum + i;
	}
	printf("%ld\n",sum);
}