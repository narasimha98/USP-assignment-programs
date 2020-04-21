// C progrm to know the type of file using stat and fstat system call.

#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<stdio.h>
int main()
{
  int fd=0;
  struct stat st;
  fd=open("stat.txt",O_RDONLY);
  if(fd==-1)
{
  printf("Null file directory\n");
  return -1;
}
if(fstat(fd,&st))
{
  printf("fstat error\n");
  close(fd);
  return -1;
}
if(S_ISREG(st.st_mode))
{
 printf("File is regular file\n");
}
else if(S_ISDIR(st.st_mode))
{
  printf("File is directory file\n");
}
close(fd);
return 0;
}

/* EXCEUTION:

creat a txt file called stat.txt and save it.
compile: gcc filename.c(stat.c in my case)
run: ./a.out stat.txt
*/

/*OUTPUT:

File is regular file
*/




