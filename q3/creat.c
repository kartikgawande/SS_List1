#include<stdio.h>
#include<sys/stat.h>
#include<fcntl.h>

int main(int argc, char* argv[]){
	printf("File created with file descriptor = %d\n", creat("creat_file", 0777));
}
