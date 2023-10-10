#include<math.h>
void main()
{
    float a,b,c,disc,root1,root2;
    printf("Enter the three co-efficient \n");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0)
    {
        printf("invalid input\n");
        exit(1);
    }
    disc=b*b-4*a*c;
    if(disc>0)
    {
        printf("roots are real and distinct\n");
        root1=(-b+sqrt(disc))/(2*a);
        root2=(-b-sqrt(disc))/(2*a);
        printf("root1=%f and root2=%f\n",root1,root2);
    }
    else if(disc==0)
    {
        printf("roots are equal\n");
        root1=root2=-b/(2*a);
        printf("root1=root2=%f\n",root1,root2);
    }
    else
    {
        printf("imaginary roots\n");
    }
getch();

}
