#include<stdio.h>
int main()
{
  float length,width,area,perimeter;
  printf ("enter the length of the rectangle:");
  scanf ("%f",&length);
  printf ("enter the width of the rectangle:");
  scanf("%f",&width);
  area=length*width;
  perimeter=2*(length+width);
  printf ("Area=%.2f\n",area);
  printf ("perimeter %.2f\n",perimeter);
  return 0;
}  