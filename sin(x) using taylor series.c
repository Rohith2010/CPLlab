#include <stdio.h>
#include <math.h>
int main()
{
    int i, n;
    float x, sum = 0, term, sign = -1;
    printf("Enter value of x (in degrees):\n");
    scanf("%f", &x);
    x = x * 3.14159265 / 180.0;
    printf("Enter the number of terms (n) for the Taylor series:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        {
            int fact = 1;
            for (int j = 1; j <= i; j++)
            {
                fact = fact * j;
            }
            term = pow(x, i) / fact;
            sum = sum + sign * term;
            sign = -sign;
        }
    printf("sin(%f) using math function is %f\n", x, sin(x));
    printf("sin(%f) = %f\n", x, sum);
    return 0;
}
