//Accept file name from user,open the file ,and count number of occurence of letter "A".


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0,iCnt = 0,iRet = 0,i =0;
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
		for(i=0;i<iRet;i++)
		{
			if(Buffer[i]=='a')
			{
				iCnt++;
			}
			
		}
	}
	printf("Total number of A are :%d\n",iCnt);
	
	close(fd);
	return 0;
}



