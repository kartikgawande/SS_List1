#include<stdio.h>
#include<sys/stat.h>
int main(){
	if(mkfifo("fifo",0777)!=0){
		printf("Unable to create fifo file.");
	} else {
		printf("fifo file created");
	}
}
