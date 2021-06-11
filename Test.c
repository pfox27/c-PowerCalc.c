/*Program to illustrate the use of getchar() and putchar() in a while loop*/
#include <stdio.h>
main()
{
char ch1;
ch1 = getchar(); /* Read a character*/
while(ch1 != '\n')
{
ch1 = getchar();
putchar(ch1);
}
}
