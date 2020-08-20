#include <stdio.h>
int main(void)
{
  float h,r;
  float ans;
  printf("Enter r : ");
  scanf("%f", &r);
  printf("Enter h : ");
  scanf("%f", &h);
  ans = ((2*3.14*r)*h+2*(3.14*(r*r)));
  printf("Answer is %f", ans); 
  return 0;
}
