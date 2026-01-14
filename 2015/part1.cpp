#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream inputFile("input.txt");

    string instructions;
    getline(inputFile, instructions);
    inputFile.close();

    int floor = 0;

    for (char c : instructions)
    {
        if (c == '(')
        {
            floor++;
        }
        else if (c == ')')
        {
            floor--;
        }

        if (floor < 0)
        {
            const int basement = floor;
        }
    }

    cout << "Floor : " << floor << endl;

    return 0;
}