
#include <stdio.h>
//Anjan Diyora Enrollment No > 190303105005

int main()
{
    int i, low, high, mid, x, flag, a[10];
    x=10;
    printf("Enter 10 integers\n");

    for (i = 0; i < x; i++)
    {
        scanf("%d", & a[i]);
    }

    printf("Enter value to find\n");
    scanf("%d", & flag);

    low = 0;
    high = x - 1;
    mid = (low + high) / 2;

    while (low <= high)
    {
        if (a[mid] < flag)
            {
                low = mid + 1;
            }
        else if (a[mid] == flag)
            {
            printf("%d found at location %d.\n", flag, mid + 1);
            break;
            }

        else high = mid - 1;
        mid = (low + high) / 2;
    }

    if (low > high)
        {
            printf("Not found! %d is not present in the list.\n", flag);
        }
    return 0;
}
