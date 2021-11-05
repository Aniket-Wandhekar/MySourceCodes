//Accept file name from user,open the file ,and count number of letters means size of file.
//lseek vaprun

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0,iRet = 0;
	char fname[20];
	
	printf("Enter File Name\n");
	scanf("%s",fname);
	
	fd = open(fname,O_RDWR);
	if(fd == -1)
	{
		printf("File is unable to open\n");
		return -1;
	}
	
	iRet = lseek(fd,0,2);  //shevti jaun thambto 2 mul ani 0 ne lseek hot mag ans yet.
	
	printf("Total number of letters are :%d\n",iRet);
	
	close(fd);
	return 0;
}



