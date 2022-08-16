#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    cout << "Size of char is: " << sizeof(char) << endl;
    cout << "Size of int is: " << sizeof(int) << endl;
    cout << "Size of long is: " << sizeof(long) << endl;
    cout << "Size of float is: " << sizeof(float) << endl;
    cout << "Size of double is: " << sizeof(double) << endl;
    cout << "Size of long long is: " << sizeof(long long) << endl;
    cout << "Size of string is: " << sizeof(string) << endl;

    char c = 41;
    int i = 43;
    cout << i+c;
}