/* C program to demonstrate atexit() system call */

#include<stdio.h>
#include<stdlib.h>
int i;
void check_a(void)
{
    i++;
    printf("Check A: %d\n", i);
}
void check_b(void)
{
    i++;
    printf("Check B: %d\n", i);
}
int main()
{
    check_a();
    atexit(check_a);
    check_b();
    atexit(check_b);
    printf("Exiting.\n");
    return 0;
}

/* OUTPUT:
 
Check A:
Check B:
Exiting.
Check B: 3
Check A: 4
*/
