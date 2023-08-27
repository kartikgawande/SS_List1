#include<stdio.h>
#include<unistd.h>
int main(int argc, char* argv[]){
	if(argc!=2 && symlink(argv[1], argv[2])==0){
		printf("Softlink created.");
	} else {
	 	printf("Failed to create softlink");
	}
}
