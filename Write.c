#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    int fd = 0; // 3
    char Data[11] = "Marvellous";
    
    fd = open("Demo.txt", O_RDWR);
    // O_RDONLY     Reading
    // O_WRONLY     Writting
    // O_RDWR       Read and Write
    // O_Append
    
    write(fd,           // Kashat lihayecha tyacha fd
            Data,       // KAy lihayecha to data
            10);        // Kiti lihayecha tyachi size
    
    close(
          fd);          // ji file close karayechi tich fd
    
    return 0;
}