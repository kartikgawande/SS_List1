#include<stdio.h>
#include<sys/types.h>
#include<fcntl.h>
#include<unistd.h>

int main(int argc, char* argv[]){
	int file = open("file.txt", O_RDWR);
	char buff[10]="1234567890";
	write(file, buff, 10);
	printf("lseek return val:%d",lseek(file, 10, SEEK_CUR));
	write(file, buff, 10);	
	getchar();
}
