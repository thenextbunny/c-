#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int array[3] = {
        2, 4, 8},
        i;

    for (i = 0; i < 3; i++)
    {
        // printf("[%d]: %d\n", i, array[i]);
        cout << "[" << i << "]: " << array[i] << "\n";
    }

    return 0;
}