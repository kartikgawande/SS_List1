#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>

int main(int argc, char* argv){
	int fd = open("file.txt", O_WRONLY | O_APPEND);
	int fd_dup = dup(fd);
	write(fd_dup, "fd_dup\n", 7);
	write(fd, "fd\n", 3);
	
	int fd_dup2 = dup2(fd, 50);
	write(fd_dup2, "fd_dup2\n", 8);
	write(fd, "fd\n", 3);
	
	int fd_fcntl_dup = fcntl(fd, F_DUPFD, 50);
	write(fd_fcntl_dup, "fd_fcntl_dup\n", 13);
	write(fd, "fd\n", 3);
	
	printf("%d", getpid());
	getchar();
	
	while(1);
	return 0;
}
