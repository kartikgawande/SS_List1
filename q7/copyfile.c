#include<stdio.h>
#include<fcntl.h>

int main(int argc, char* argv[]){
	FILE* file1, *file2;
	if(argc==3){
		file1=fopen(argv[1], "r");
		file2=fopen(argv[2], "w");
		
		char c=fgetc(file1);
		while(c!=EOF){
			fputc(c, file2);
			c=fgetc(file1);
		}
		printf("File copied successfully.");
		fclose(file1);
		fclose(file2);
		getchar();
		return 0;
	} else {
		printf("Invalid number of arguments: %d", argc);
		return -1;
	}
}
