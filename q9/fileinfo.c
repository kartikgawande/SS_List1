#include<stdio.h>
#include<sys/stat.h>
#include<fcntl.h>


int main(int argc, char* argv[]){
	int filedesc;
	struct stat filestat;
	filedesc = creat("file",0777);
	//filedesc = open("file", "r");
	fstat(filedesc, &filestat);
	printf("File inode:%d\n",filestat.st_ino);
	printf("No of hard disk links:%d\n",filestat.st_nlink);
	printf("uid:%d\n",filestat.st_uid);
	printf("gid:%d\n",filestat.st_gid);
	printf("Size:%d\n",filestat.st_size);
	
	printf("Block size:%d\n",filestat.st_blksize);
	printf("No of blocks:%d\n",filestat.st_blocks);
	printf("Time of last access:%d\n",filestat.st_atime);
	printf("Time of last modification:%d\n",filestat.st_mtime);
	printf("Time of last change:%d\n",filestat.st_ctime);
	getchar();
	return 0;
}
