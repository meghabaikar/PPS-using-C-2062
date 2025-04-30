#include<stdio.h>
int main()
{
  int num1,num2,num3,average;
  printf("enter first number");
  scanf("%d",&num1);
  printf("enter second number");
  scanf("%d",&num2);
  printf ("enter third number");
  scanf("%d",&num3);
  average=(num1+num2+num3)/3;
  printf("average of %d and %d and %d is %d",num1,num2,num3,average);
  return 0;
  }