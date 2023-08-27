#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main(){
	printf("%d", getpid());
	getchar();
	while(1);
}
