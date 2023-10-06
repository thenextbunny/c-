#include <iostream>
#include <new>
using namespace std;

void createArray(int **&array, int *cols, int *rows)
{
    int i;

    cout << "Enter the number of columns: ";
    cin >> *cols;
    cout << "Enter the numbers of rows: ";
    cin >> *rows;

    array = new int *[*rows];

    for (i = 0; i < *rows; i++)
    {
        array[i] = new int[*cols];
    }

    // Ask for the values of the elements
    for (i = 0; i < *rows; i++)
    {
        for (int j = 0; j < *cols; j++)
        {
            cout << "Enter the value of the element [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }
}

void showArray(int **array, int *cols, int *rows)
{
    int i, j;

    for (i = 0; i < *rows; i++)
    {
        cout << "{";
        for (j = 0; j < *cols; j++)
        {
            cout << " " << array[i][j] << " ";
        }
        cout << "}\n";
    }
}

int main()
{
    int **array;
    int cols, rows;

    createArray(array, &cols, &rows);

    showArray(array, &cols, &rows);

    return 0;
}