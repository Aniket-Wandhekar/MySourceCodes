//Write applicaton which accept file name from user and open that file in read mode.


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>

int main()
{
	int fd = 0;
	char Fname[30];
	
	printf("Enter file name\n");
	scanf("%s",Fname);
	
	fd = creat(Fname,o_RD);
	
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