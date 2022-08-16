#include <iostream>

using namespace std;

int addition(int& a, int& b)
{
    a = 10;
    b = 12;
    return a+b;
}

int main()
{
    int a = 5, b = 2;

    cout << "Math operation: " << addition(a, b) << "\n";
    cout << "a-value: " << a << "\n";
    cout << "b-value: " << b << "\n";
}