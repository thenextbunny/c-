#include <stdio.h>
#include <stdlib.h>

int *allocateArray(int size)
{
    int i, *aux; // aux

    // Allocate memory for the array
    aux = (int *)malloc(size * sizeof(int));

    // Return the pointer that points to the first element of the array
    return aux;
}

int createArray(int size, int *array)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("Enter the value for the element %d: ", i);
        scanf("%d", &array[i]);
    }
}

int showArray(int size, int *array)
{
    int i;

    printf("{");
    for (i = 0; i < size; i++)
    {
        printf(" %d ", array[i]);
    }
    printf("}");
}

int main()
{
    int *array, size;

    // Ask to the user the size of the array
    printf("What's the size of the array? ");
    scanf("%d", &size);

    // Pointer receives the address of memory allocated for the array
    array = allocateArray(size);

    // Create the array
    createArray(size, array);

    // Show array
    showArray(size, array);
}