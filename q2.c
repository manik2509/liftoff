#include<stdio.h>

int main()
{
    float c, f;
    printf("Enter temperature in Celsius: \n");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;

    printf("temperature in fahrenheit %f", f);
    return 0;
}