#include<stdio.h>
int main()
{
 int num, i, rem, check = 0;
 printf("Enter the number\t");
 scanf("%d",& num);
 
 for(i=2; i<num; i++)
 { 
  rem= num % i;
  if (rem == 0)
  { 
    check=1;
  }
 }
 if (check==0)
 {
   printf("PRIME");
 }
 else
 { 
  printf ("NOT PRIME");
 }
 return 0;
} 
      
    
 