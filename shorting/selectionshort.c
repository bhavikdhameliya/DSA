#include <stdio.h>
#include <stdlib.h>
#define n 10
int a[n];
int selectionSort()
{
    int i, j, t;
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}

int main()
{
    int  i;
    for (i = 0; i < n; i++)
        a[i] = rand() % 30 + 1;

    printf("Random Array is: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    
    selectionSort();
    // bubbleSort();
    
    printf("\nSorted Array is: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}