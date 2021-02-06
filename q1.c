#include <stdio.h>

int main()
{
    int sum, sub, mul, mod;
    int a, b;
    float div;

    
    printf("Enter any two numbers: ");
    scanf("%d%d", &a, &b);

    
    sum = a + b;
    sub = a - b;
    mul = a* b;
    div = (float)a/ b;
    mod = a % b;
    printf("SUM = %d\n", sum);
    printf("DIFFERENCE = %d\n", sub);
    printf("PRODUCT = %d\n", mul);
    printf("QUOTIENT = %f\n", div);
    printf("MODULUS = %d", mod);

    return 0;
}
