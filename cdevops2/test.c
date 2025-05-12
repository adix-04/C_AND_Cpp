#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(int argc , char *argv[]){
    if(argc < 2){
      printf("empty arguments \n");
      return 0;
    }
    char c;
    int fd;
    fd = open(argv[1],O_RDONLY);
    if(fd < 0){
        printf("error openinng file in rd \n");
        return 0;
    }
    while(read(fd , &c , 1))
          putchar(c);
    
    close(fd);
    
}