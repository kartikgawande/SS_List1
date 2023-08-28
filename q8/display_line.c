#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<stdlib.h>

int main(int argc, char* argv[]){
	FILE* file;
	char c;
	char* line=NULL;
	size_t len = 0;//[0,unsigned int max size]
	int read;//[-1, SSIZE_MAX]
	file = fopen("file.txt", "r");
	while((read=getline(&line, &len, file))!=-1) printf("%s\n",line);
	//while((c=getc(file))!=EOF)printf("%c",c);
	getchar();	
	fclose(file);
}
