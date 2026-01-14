#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream inputFile("input.txt");

    if (!inputFile)
    {
        cerr << "Error: Cannot open input.txt" << endl;
        return 1;
    }

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
    }

    cout << "Floor : " << floor << endl;

    return 0;
}