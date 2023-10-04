#include <iostream>

using namespace std;

int main()
{
    int array[3][3] = {
        {1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
        i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "[" << i << "]"
                 << "[" << j << "]: " << array[i][j] << "\n";
        }
    }

    return 0;
}