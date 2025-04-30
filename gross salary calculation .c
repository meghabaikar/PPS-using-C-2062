#include<stdio.h>
int main()
{
  float basic,da,hra,gross;
  printf ("enter Ramesh's basic salary:");
  da=0.4*basic; // Dearness
  hra=0.2*basic; //House Rent
  gross=basic+da+hra;
  printf ("gross salary=%.2f\n",gross);
  return 0;
}  