#include<stdio.h>
int convert(int);
int main()
{
    int dec,bin;
    printf("enter the binary number only:  \n");
    scanf("%d",&bin);
    dec=convert(bin);
    printf("the decimal equivalent of %d is %d  \n",bin,dec);
}
int convert(int bin)
{
    if(bin==0)
        return 0;
    else
        return(bin%10+2*convert(bin/10));
}
