#include<unistd.h>
#include<stdio.h>

int main(int argc, char* argv[]){
	char buff[20];
	read(1, buff, 20);
	write(0, buff, 20);
	getchar();
}
