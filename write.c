// C program to illustrate use of write system call

/* write system call will overwrite the contents from the file(write.txt) and display the msg declared in the program(char msg[50])
*/

#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
  int fd;
  char buffer[80];
  char msg[50]="hello this is file for write system call";
  fd=open("write.txt",O_RDWR);
  printf("fd=%d",fd);
  if(fd!=-1)
{
  printf("\n file is opened for read and write access\n");
  write(fd,msg,sizeof(msg));
  printf("Data written to the file is: %s",msg);
  close(fd);
}
return 0;
}

/* OUTPUT:

fd=3
file is opened for read and write access
Data written to the file is:
hello this is file for write system call
*/





