// C program to implement mv command using unlink system call and rename the files.

#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>
int main(int argc,char **argv)
{
  int fd1,fd2;
  int n,count=0;
  fd1=open(argv[1],O_RDONLY);
  fd2=creat(argv[2],S_IWUSR);
  rename(fd1,fd2);
  unlink(argv[1]);
  close(fd1);
  close(fd2);
  printf("File renamed successfully\n");
  return 0;
}

/*EXECUTION:
 
gcc unlink.c
./a.out unlink1.txt sample.txt
*/

/*OUTPUT:
 
File rename successfully

unlink1.txt will be renamed as sample.txt(to check use: ls -l command)
*/
