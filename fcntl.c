// C progrm to Duplicate a file descriptor(fd) with fcntl() system call 

#include<sys/types.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<errno.h>
int main(int argc,char **argv)
{
  int fd,nfd;
  if(argc<2)
{
  printf("Usage:%s pathname\n",argv[0]);
  exit(1);
}
if((fd=open(argv[1],O_WRONLY))<0)
{
  perror("Problem in opening the file");
  exit(1);
}
if((nfd=fcntl(fd,F_DUPFD,0))==-1)
{
  perror("Problem in duplicating fd");
  exit(1);
}
printf("Fd %d duplicated with %d\n",fd,nfd);
close(fd);
close(nfd);
return 0;
}

/*EXECUTION:
gcc fcntl.c
./a.out fcntl.txt
*/

/*OUTPUT:
Fd 3 duplicated with 4
*/


