#include<stdio.h>
int main()
{
  int num1,num2;
  printf ("enter first number");
  scanf ("%d",&num1);
  printf ("enter second number");
  scanf("%d",&num2);
  if (num1>num2)
  {
    printf ("the largest number is %2d\n",num2);
   }
   else
   {
    printf ("both numbers are equal \n");
    }
    return 0;
}    