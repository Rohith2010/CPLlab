#include <stdio.h>
#include <math.h>
int main() 
{
    float a[10], *ptr, mean, std, sum = 0, sumstd = 0;
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%f", &a[i]);
    }
     ptr = a;
    for (i = 0; i < n; i++) 
    {
        sum += *ptr;
        ptr++;
    }
    mean = sum / n;
    ptr = a;
    for (i = 0; i < n; i++) 
    {
        sumstd += pow((*ptr - mean), 2);
        ptr++;
    }
    std = sqrt(sumstd / n);
    printf("Sum = %f\n", sum);
    printf("Mean = %f\n", mean);
    printf("Standard Deviation = %f\n", std);
    return 0;
}

