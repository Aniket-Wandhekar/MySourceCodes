//abcde lihlelya file madhle first 5 letter read kra ani pudche 5 letter dakhva.


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0;
	char Arr[10];
	
	fd = open("LB17.txt",O_RDWR);
	
	if(fd==-1)
	{
		printf("Unable to open file\n");
	}
	// 0 from start position
	// 1 from current position
	// 2 from end of the file
	
	lseek(fd,5,0);  //pahile 5 letter skip kele lseek ni
	
	read(fd,Arr,5);
	
	printf("Data from file is :\n");
	
	write(1,Arr,5);
	
	close(fd);
	
	return 0;
}


