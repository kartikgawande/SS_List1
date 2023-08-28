#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<unistd.h>
//#include<sys/stat.h>

int main(int argc, char* argv[]){
	char fileName[5]="file";
	for(int i=0; i<5;i++){
		fileName[4]=(char)i+'0';
		printf("%d ",creat(fileName, 0777));
	}
	printf("\n%d\n", getpid());
	getchar();
	while(1);
}
