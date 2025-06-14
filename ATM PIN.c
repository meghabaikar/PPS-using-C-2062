#include<stdio.h>
int main()
{
  int pin, i, X=4743;
  printf("pin must be correct");
  for( i=1; i<=3; i++);
  {
    printf("/n enter your ATM PIN");
    scanf("%d",& pin);
    if(pin==X)
    {
      printf("/n collect your cash");
    }
    else if (i=3)
    {
     printf("/n ATM has been blocked");
    }
    else
    {
      printf("/n Incorrect pin plz try after 24 hours");
    }
  }
  return 0;
}   