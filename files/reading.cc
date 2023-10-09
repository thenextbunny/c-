#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // Create a file and open
    ifstream input("reading.txt");

    // Receiving and storing
    string text;

    // Checking if the file is open
    if (!input.is_open())
    {
        cout << "The file could not be opened!\n";
        return -1;
    }

    for (string line; getline(input, line);)
    {
        text += line;
    }

    // Viewing
    cout << text;

    return 0;
}