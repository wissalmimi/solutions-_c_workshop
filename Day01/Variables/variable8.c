#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  float a,b,c,m_g;
  printf("entre trois nombre/n : ");
  scanf("%f%f%f",&a,&b,&c);
  m_g = pow (a*b*c,1/3);
  printf("la moyenne geometrique est: %.2f/n,&m_g");




  return 0;
}
