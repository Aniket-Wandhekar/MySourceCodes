/*
	This program demonstates block input and output from file by using fread,fwrite.
*/

#include<stdio.h>

struct demo
{
int i;
char *p;
};

int main()
{

FILE *fp = NULL;
int ret;

struct demo obj1,obj2;
obj1.i = 10;
obj1.p = "Hello";

// open the file
fp = fopen("file.txt","w");
if(fp == NULL)
{
	printf("Unable to open file\n");
}

// This function is used to write block in file.

ret = fwrite(&obj1,sizeof(obj1),1,fp);
// First parameter :	Data element to be write
// Second parameter :	Size of data element
// Third parameter :	No of data elements
// Fourth parameter : 	File pointer

// This function returns number of data elements written in file
 
if(ret != 1)
{
	printf("Error while writing the contents");
	return -1;
}

fclose(fp);

// open the file
fp = fopen("file.txt","w");
if(fp == NULL)
{
	printf("Unable to open file\n");
}

fread(&obj2,sizeof(obj2),1,fp);

printf("%d %s",obj2.i,obj2.p);

return 0;
}
