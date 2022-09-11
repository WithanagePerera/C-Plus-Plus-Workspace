#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Creates const char pointer
    // Extra character is null termination character
    "Praveen";

    // Manual null termination character
    "Praveen\0";
    // Signals end of string

    // Null terminator interupts name, only prints "Prav"
    string test = "Prav\0een";

    cout << test;
}