#include <iostream>

using namespace std;

int createArray(int size, int *array)
{
    int i;

    for (i = 0; i < size; i++)
    {
        cout << "Enter the value of the element " << i << ": ";
        cin >> array[i];
    }
}

int showArray(int size, int *array)
{
    int i;

    cout << "{";
    for (i = 0; i < size; i++)
    {
        cout << " " << array[i] << " ";
    }
    cout << "}";
}

int main()
{
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    // Create a pointer that receiver the new empty array
    int *array = new int[size];

    createArray(size, array);

    showArray(size, array);

    // Free the memory
    delete[] array; // option 1
    free(array);    // option 2

    return 0;
}