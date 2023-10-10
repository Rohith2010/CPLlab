#include<stdio.h>
void main()
{
    char name[20];
    int units;
    float bill=100;
    printf("enter user name\n");
    scanf("%s",&name);
    printf("the units consumed \n");
    scanf("%d",&units);
    if(units>0&&units<=200)
    {
        bill=bill+units*0.8;
    }
    else if(units>200&&units<=300)
    {
        bill=bill+200*0.8+(units-200)*0.9;
    }
    else if(units>300)
    {
        bill=bill+200*0.8+100*0.9+(units-300);
    }
    else
    {
        printf("invalid input\n");
        exit(1);
    }
    if(bill>400)
    {
        bill=bill+0.15*bill;
    }
    printf("\n username: %s \n units consumed: %d \n bill amount in rs : %f ",name,units,bill);
    getch();
}
