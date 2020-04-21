/* C program to illustrate vfork() function */

#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
int glob=6;
int main(void)
{
int var;	/* automatic variable on the stack */ 
pid_t pid;
var = 88;
printf("before vfork\n");	/* we don't flush stdio */ 
if((pid = vfork()) < 0) 
{
perror("vfork error");
} 
else if (pid == 0) 
{	/* child */
glob++;	/* modify parent's variables */ var++;
exit(0);	/* child terminates */
}
/*
* Parent continues here.
*/
printf("pid = %d, glob = %d, var = %d\n", getpid(), glob, var); 
exit(0);
}

/* OUTPUT:

before vfork
pid=4648, glob = 7, var = 89
*/
