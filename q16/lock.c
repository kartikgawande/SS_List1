#include<fcntl.h>
#include<stdio.h>

int get_write_lk(int fd){
	struct flock lock;
	lock.l_type=F_WRLCK;
	lock.l_whence=SEEK_SET;
	lock.l_start=0;
	lock.l_len=0;
	
	return fcntl(fd, F_SETLK,&lock);
}

int get_read_lk(int fd){
	struct flock lock;
	lock.l_type=F_RDLCK;
	lock.l_whence=SEEK_SET;
	lock.l_start=0;
	lock.l_len=0;
	
	return fcntl(fd, F_SETLK,&lock);
}

int rel_lk(int fd){
	struct flock lock;
	lock.l_type=F_UNLCK;
	lock.l_whence=SEEK_SET;
	lock.l_start=0;
	lock.l_len=0;
	
	return fcntl(fd, F_SETLK,&lock);
}

int main(int argc, char* argv[]){
	int fd = open("file.txt", O_RDWR);
	printf("Write lock status:%d\n",get_write_lk(fd));
	printf("Write lock released:%d\n",rel_lk(fd));
	printf("Read locked:%d\n",get_read_lk(fd));
	printf("Read lock released:%d\n",rel_lk(fd));
}
