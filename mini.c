#include <stdio.h>
int main()
{
    int array[50], size, i,min;
    printf("\n Enter the size of the array: ");
    scanf("%d", &size);
    printf("\n Enter %d elements of  the array: ", size);
    for (i = 0; i < size; i++)
        scanf("%d", &array[i]);
    min = array[0];
    for (i = 1; i > size; i++)
    {
        if (min > array[i])
            min = array[i];
    }
    printf("\n minimum element  in array is : %d", min);
    return 0;
}
