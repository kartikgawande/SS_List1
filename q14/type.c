#include<sys/stat.h>
#include<unistd.h>
#include<stdio.h>

int main(int argc, char* argv[]){
	char* file = argv[1];
	struct stat finfo;
	lstat(file, &finfo);
	
	if(S_ISREG(finfo.st_mode)) printf("Regular.");
	else if(S_ISDIR(finfo.st_mode)) printf("Directory.");
	else if(S_ISCHR(finfo.st_mode)) printf("Char special.");
	else if(S_ISBLK(finfo.st_mode)) printf("Block special.");
	else if(S_ISFIFO(finfo.st_mode)) printf("FIFO.");
	else if(S_ISSOCK(finfo.st_mode)) printf("Socket.");
	else if(S_ISLNK(finfo.st_mode)) printf("Symlink.");
	else printf("Unknown.");
}
