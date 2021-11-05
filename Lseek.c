#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    int fd = 0; // 3
    char Data[11] = {'\0'};
    // M    a   r   v   l   l   o   u   s
    fd = open("Demo.txt", O_RDWR);
    
    //  0   Starting position
    //  1   Current position
    //  2   End of the file
    
    // lseek is used for random access 
    lseek(
          fd,   // Kashat seek karatecha ahe
          5,    // Kiti ne move whayecha ahe
          0);   // Kuthun move whayecha ahe
    
    read(fd,           // Kashatun read karayecha tyacha fd
            Data,       // Kashat read karayecha tyacha array
            5);        // Kiti read tyacha size
    

    printf("Data is : %s \n",Data);
    
    close(
          fd);          // ji file close karayechi tich fd
    
    return 0;
}