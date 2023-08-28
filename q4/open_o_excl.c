#include<stdio.h>
#include<fcntl.h>

int main(int argc, char* argv[]){
	printf("%d",open("file.txt", O_CREAT, O_EXCL, O_RDWR));
	return 0;
}
