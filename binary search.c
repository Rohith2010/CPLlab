#include<stdio.h>
int main()
{
    int search,found=0;
    int i,j,temp,mid;
    int a[10],n;
    int u,l;
    printf("enter the value of n\n");
    scanf("  %d",&n);
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("  %d",&a[i]);
    }
    //bubble sort to sort the array first
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        printf("\n sorted array \n");
        for(i=0;i<n;i++)
        {
            printf(" %d",a[i]);
        }
        printf("\n enter element to be searched \n",search);
        scanf("  %d",&search);
        l=0;
        u=n-1;
        //binary search
        while(l<=u)
        {
            mid=(l+u)/2;
            if(a[mid]==search)
            {
                printf("\n element found in position %d",mid+1);
                found=1;
                break;
            }
            else if(search<a[mid])
            {
                u=mid-1;
            }
            else if(search>a[mid])
            {
                l=mid+1;
            }
        }
        if(found!=1)
        {
            printf("\n sorry! element not found");
        }
    }
    return 0;
}
