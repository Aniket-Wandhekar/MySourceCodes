//open file in werite mode ani file chya shevti data liha.
//end of the file la yet brobr.


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0;
	char Arr[]="Hello";
	
	
	fd = open("LB17.txt",O_RDWR | O_APPEND);
	
	if(fd==-1)
	{
		printf("Unable to open file\n");
	}
	
	write(fd,Arr,5);
	
	close(fd);
	
	return 0;
}


