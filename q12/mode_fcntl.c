#include<fcntl.h>
#include<stdio.h>
#include<unistd.h>

int main(int argc, char* argv[]){
	int fd = open("file.txt", O_RDWR);
	int statusFlag = fcntl(fd, F_GETFL);
	int accessMode = statusFlag & O_ACCMODE;
	
	printf("fd:%d\n", fd);
	printf("statusFlag:%d\n", statusFlag);
	printf("accessMode:%d\n", accessMode);
	
	switch(accessMode){
		case O_RDONLY:
			printf("Read only.\n");
			break;
		case O_WRONLY:
			printf("Write only.\n");
			break;
		case O_RDWR:
			printf("Read and write.\n");
			break;
		default:
			printf("Other modes.\n");
			break;
	}
	
	/*if(accessMode==O_RDONLY)printf("Read only.\n");
	else if(accessMode==O_WRONLY)printf("Write only.\n");
	else if(accessMode==O_RDWR)printf("Read and write only.\n");
	else printf("Other mode.\n");*/
	close(fd);
	return 0;
}
