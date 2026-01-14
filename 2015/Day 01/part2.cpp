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

    for (size_t i = 0; i < instructions.length(); i++)
    {
        char c = instructions[i];

        if (c == '(')
        {
            floor++;
        }
        else if (c == ')')
        {
            floor--;
        }
        if (floor == -1)
        {
            cout << "First enters basement at position " << (i + 1) << endl;
            return 0;
        }
    }

    return 0;
}