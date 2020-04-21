// C program to illustrate use of creat() system call

#include<sys/types.h>
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<errno.h>
int main()
{
  // if file is not present in directory(/home/vishal: it is the home directory in my case.)
  //then file creat.txt is created in the directory: /home/vishal

  int fd=open("creat.txt",O_RDONLY|O_CREAT);
  printf("fd=%d\n",fd);
  if(fd==-1)
{ 
  // print which type of error have in the creat.txt file.
   printf("Error number %d\n",errno);
   // print program detail "success or failure".
   perror("Program");
}
return 0;
}

// EXECUTION:

// to create a file(c program): gedit filename.c
// to compile: gcc filename.c
// to run: ./a.out

// OUTPUT:

// fd=3 (fd: file descriptior table entry is 3 in this case)
 
 


