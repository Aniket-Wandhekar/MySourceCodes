//Accept file name from user,open the file ,and count number of letters means size of file.


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0,iSum = 0,iRet = 0,i =0;
	char fname[20];
	char Buffer[10];
	
	printf("Enter File Name\n");
	scanf("%s",fname);
	
	fd = open(fname,O_RDWR);
	if(fd == -1)
	{
		printf("File is unable to open\n");
		return -1;
	}
	
	while((iRet = read(fd,Buffer,10))!= 0)
	{
		iSum = iSum + iRet;
	}
	printf("Total number of letters are :%d\n",iSum);
	
	close(fd);
	return 0;
}



