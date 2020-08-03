#include <stdio.h>
int main()
{
    int a[100], n, i, j, temp;

    printf("\n Please Enter the total n of Elements  :  ");
    scanf("%d", &n);

    printf("\n Please Enter the Array Elements  :  ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("\n List Sorted in Ascending Order : ");
    for(i = 0; i < n; i++)
    {
        printf(" %d \t", a[i]);
    }
    printf("\n");
    return 0;
}
