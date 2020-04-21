/* C program to illustrate race condition */
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
static void charatatime(char *);
int main(void)
{
  pid_t pid;
  if ((pid = fork()) < 0)
  {
    printf("fork error");
  }
  else if (pid == 0)
  {
    charatatime("output from child");
  }
  else
  {
    charatatime("output from parent");
  }
  exit(0);
}
static void charatatime(char *str)
{
  char *ptr;
  int c;
  setbuf(stdout, NULL); /* set unbuffered */
  for (ptr = str; (c = *ptr++) != 0;)
    putc(c, stdout);
}

/*OUTPUT:

./a.out
output from child output
from parent
*/


