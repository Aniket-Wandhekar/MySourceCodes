//write a c program to open the file and write content and close the file.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0,iRet = 0;
	char Fname[30];
	char Data[] ="Marvellous Infosyatems";
	
	printf("Enter file name\n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDWR);
	
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;		//return to OS.kahitri chukty.
	}
	
	else
	{
		printf("File Successfully opened with FD : %d\n",fd);
		
	}
	
	iRet = write(fd,Data,22);
	
	printf("%d bytes get succesfully written in file\n",iRet);
	
	return 0;
}