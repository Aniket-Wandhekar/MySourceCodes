//write a c program to create new file.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>

int main()
{
	int fd = 0;
	
	fd = creat("Marvellous.txt",0777);
	
	if(fd == -1)
	{
		printf("Unable to create file\n");
	}
	else
	{
		printf("File Successfully created\n");
	}
	
	return 0;
}