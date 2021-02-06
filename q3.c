#include<stdio.h>

int main()
{
  float r, d;
  float area, circum;
  printf ("enter the radius:\n");
  scanf ("%f", &r);
  d = r * 2;
  area = (3.14 * r * r);
  circum = (2 * r * 3.14);
  printf ("diameter of circlr: %f\n", d);
  printf ("area of the circle: %f \n", area);
  printf ("circumference of the circle %f \n", circum);

  return 0;
}
