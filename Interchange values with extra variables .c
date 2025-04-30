#include<stdio.h>
int main()
{
  int a,b,tem;
  printf ("enter the first number:");
  scanf ("%d",&a);
  printf ("enter the second number:");
  scanf ("%d",&b);
  //swapping using an extra variable
  tem =a;
  a=b;
  b=tem;
  printf ("after swapping:\n");
  printf ("first number =%d\n",b);
  printf ("second number %d\n",b);
  return 0;
}  