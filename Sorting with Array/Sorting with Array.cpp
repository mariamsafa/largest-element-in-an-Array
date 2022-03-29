#include<stdio.h>
int main()
{
    int n, i, array[100];
    printf("Enter the number of elements(1 to 100)\n");
    scanf_s("%d",&n);
    for (i = 0; i < n; i++)
    {
        printf("Enter number %d : ", i + 1);
        scanf_s("%d", &array[i]);
    }
    for (i = 1; i < n; i++)
    {
        if (array[0] < array[i])
        {
            array[0] = array[i];
        }
    }
    printf("\nLargest element is %d", array[0]);
    return 0;
}