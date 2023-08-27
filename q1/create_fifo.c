#include<stdio.h>
#include<sys/stat.h>

int main(){
	if(mkfifo("fifo", 0700)!=0){
		printf("Failed to create FIFO file.");
	} else {
		printf("Created FIFO file.");
	}
	return 0;
}
