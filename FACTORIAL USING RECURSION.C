#include<stdio.h>
#include<stdlib.h>
long int factorial(int n);
int main()
{
    int num;
    long int result;
    printf(" enter the number \n ");
    scanf("%d",&num);
    if(num<0)
    {
        printf("invalid input \n");
        exit(1);
    }
    result=num*factorial(num-1);
    printf("the factorial of %d is %d ",num ,result);
}

long int factorial(int n)
{
    if(n>=1)
        return n*factorial(n-1);
    else
        return 1;
}
