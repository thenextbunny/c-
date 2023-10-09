#include <fstream>

using namespace std;

int main()
{
    // Create a file and open
    ofstream file;

    /**
     * @param name
     * @param format
     */
    file.open("writing.txt", ios_base::app);

    // Writing
    file << "Hello World in a file using C++!\n";

    // Closing
    file.close();

    return 0;
}