#include <stdio.h>
#include<math.h>
#deline PI 3.14

double sup_area(double r);
double volume(double r);

void main()
{
  double a=-5;
  
  b=fabs(a);
  s=sup_aera (b);
  v=volume(b);
  printf("s=%lf,v=%lf\n",s,v);
  
}

double sup_area(double r)
{
  double s;
  s=0;
  s=4*PI*r*r;
  
  return s;
  
}

double volume(double r)
{
  double v;
  v=0;
  v=4.0/3.0*PI*r*r*r;
  
  return v;
  
}
