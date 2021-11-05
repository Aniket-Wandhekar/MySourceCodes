//write a c program to open the file and write content read content  and close the file.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0,iRet = 0;
	char Fname[30];
	char Data[7];
	
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
	
	iRet = read(fd,Data,7);
	
	printf("%d bytes get succesfully read from the file\n",iRet);
	
	printf("Data from the file is :");
	
	write(1,Data,iRet);  //1 monitor sathi takla
	
	close(fd);
	
	return 0;
}