// C program to Copy access and modification time of a file to another file using utime function

#include <stdio.h>
#include <stdlib.h>
#include <utime.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
int main(int argc, char *argv [])
{
	if(argc<3){
		printf("Exiting");
		exit(0);
	}
	struct stat mystat;
	struct utimbuf times;
        stat(argv[1],&mystat);
	printf("\natime=%s\nmtime=%s",ctime(&mystat.st_atime),ctime(&mystat.st_mtime));
	stat(argv[2],&mystat);
	times.actime=mystat.st_atime;
	times.modtime=mystat.st_mtime;
	utime(argv[1],&times);
	stat(argv[1],&mystat);
	printf("\natime=%s\nmtime=%s",ctime(&mystat.st_atime),ctime(&mystat.st_mtime));
	return 0;
}

/* EXECUTION:

./a.out utime.c link.c (take any two files)

*/

/* OUTPUT:

atime= Mon Apr 13 16:04:48 2020
mtime= Mon Apr 13 16:04:48 2020

atime= Sun Apr 12 21:20:24 2020
mtime= Sun Apr 12 21:20:24 2020
*/
