#include <iostream>
#include <new>
#include <string>

using namespace std;

struct Pets
{
    string name;
    string type;
    float weight;
};

int main()
{
    Pets *pet = new Pets;

    pet->name = "Beethoven";
    pet->type = "dog";
    pet->weight = 5;

    cout << pet->name << " is a " << pet->type << " and has " << pet->weight << "kg\n";

    // Vector
    Pets *pets = new Pets[2];

    pets[0].name = "Chico";
    pets[0].type = "bird";
    pets[0].weight = 0.100;

    pets[1].name = "Nina";
    pets[1].type = "cat";
    pets[1].weight = 4;

    for (int i = 0; i < 2; i++)
    {
        cout << pets[i].name << " is a " << pets[i].type << " and has " << pets[i].weight << "kg\n";
    }

    return 0;
}