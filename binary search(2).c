#include<stdio.h>

int main()
{
    int i,x,flag,high,low,mid,a[10];
    x=10;

    printf("enter the 10 elements:");
    for(i=0;i<x;i++)
    {
      scanf("%d",&a[i]);
    }

    printf("\n Find the value: ");
    scanf("%d",&flag);

    low=0;
    high=x-1;
    mid=(low+high)/2;

    while(low<=high)
    {
        if(flag<a[mid])
        {
            high=mid-1;
        }
        else if(flag>a[mid])
        {
            low=high+1;
        }
        else if (flag==a[mid])
        {
            printf("%d found at location %d.\n", flag, mid + 1);
            break;
        }

    }
    if (low>high)
    {
        printf("Not found! %d is not present in the list.\n", flag);
    }
    return 0;

}

