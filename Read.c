#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    int fd = 0; // 3
    char Data[11] = {'\0'};		//array la \0 la intilize keun thevaych mag te khalch write kraychi grj nahi pdt.
    
    fd = open("Demo.txt", O_RDWR);
    
    read(fd,           // Kashatun read karayecha tyacha fd
            Data,       // Kashat read karayecha tyacha array
            5);        // Kiti read tyacha size
    

    printf("Data is : %s \n",Data);
    
    //write(1,Data,5);    // printf()
    
    close(
          fd);          // ji file close karayechi tich fd
    
    return 0;
}