#include <stdio.h>
void myFunction(int n)
{
 if(n == 0)
 return;
 myFunction (n-1);
 printf("%d ",n);
}
