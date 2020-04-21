// C program to illustrate use of read() system call

#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
  int fd;
  char buffer[88];
  char msg[40]="Hello this is read system call";
  fd=open("read.txt",O_RDWR|O_CREAT);
  printf("fd=%d\n",fd);
  if(fd!=-1)
{
  printf("File opened for read and write access\n");
  read(fd,msg,sizeof(msg));
  printf("data read from the file is :%s\n",msg);
  close(fd);
}
return 0;
}

/*OUTPUT:
fd=3
File opened for read and write access
data read from the file is:
Hello this is read system call
*/





