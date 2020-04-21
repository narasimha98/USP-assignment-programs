/* C program to check access permissions(read-only,write or read-write) of the file using access system call
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
int main(int argc, char *argv[])
{
    if (argc != 2)
        printf("usage: argv[0] <pathname>");
    if (access(argv[1], R_OK) < 0) /* access flag=read-only(R_OK) */ 
        printf("access error for %s\n", argv[1]); /* checks whether file is read-only,write or read-write */
    else
        printf("read access is allowed\n");
    if (open(argv[1], O_RDONLY) < 0)
        printf("opening a file is error because the file has permissions of write,read-write for %s\n", argv[1]);
    else
        printf("Access permission for the file is read-only\n");
    exit(0);
}

/*OUTPUT:
 
./a.out access.txt

read access is allowed
Access permission for the file is read-only

./a.out stat.txt

access error for stat.txt
opening a file is error because the file has permissions of write,read-write for stat.txt 
*/
