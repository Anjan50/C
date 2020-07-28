#include<stdio.h>
//Anjan diyora 190303105005
//array is linear data structure
//each int store in 2 byte

void main()
{
    int a[10],i,x;
    printf("Enter array: \n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter search value: ");
    scanf("%d",&x);
    for(i=0;i<=9;i++)
    {
        if(a[i]==x)
        {
            printf("\nsearch is successful");
            printf(" >> %d found at location %d.\n",x,i);

        }
        else
        {
            printf("\nsearch is unsuccessful");
        }
    }

}
