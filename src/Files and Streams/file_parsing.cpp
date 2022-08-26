#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream fileStream;
    fileStream.open("sample_input.txt");

    cout << fileStream;
}