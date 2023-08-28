#include<stdio.h>
#include<sys/time.h>
#include<sys/types.h>
#include<sys/select.h>

int main(int argc, char* argv[]){
	fd_set stdin;
	FD_ZERO(&stdin);
	FD_SET(0, &stdin);//ie these flags are set if the fd is blocked
	struct timeval tv;
	tv.tv_sec=10;
	int result = select(1,&stdin,NULL,NULL,&tv);
	printf("result:%d\n",result);
	if(result){
		printf("STDIN ready.\n");
	} else {
		printf("STDIN not ready.\n");
	}
}
