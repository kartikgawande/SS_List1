#include<time.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>

int main(int argc, char* argv[]){
	clock_t start, end;
	start =  clock();
	int pid = getpid();
	end = clock();
	printf("Elapsed seconds for getting PID: %f\n", ((double)(end-start)/CLOCKS_PER_SEC));
}
