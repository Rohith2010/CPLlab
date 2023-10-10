#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,choice,result;
    printf("\n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n 5. Reminder \n");
    scanf("\n%d",&choice);
    printf("\n enter two numbers\n");
    scanf("\n%d \n%d",&a,&b);
    switch(choice)
    {
        case 1: result=a+b;
                printf("sum=%d",result);
                break;
        case 2: result=a-b;
                printf("diff=%d",result);
                break;
        case 3: result=a*b;
                printf("product=%d",result);
                break;
        case 4: if(b=0)
                {
                    printf("invalid input \n");
                    exit(1);
                }
                result=a/b;
                printf("result = %d",result);
                break;
        default: printf("invalid choice");
    }
 getch();
}
