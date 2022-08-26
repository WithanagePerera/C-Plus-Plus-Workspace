#include <iostream>

using namespace std;

int addition(int a, int b)
{
    a = 12;
    b = 10;
    return a+b;
}

int addition(int *a, int *b)
{
    *a = 12;
    *b = 10;
    return *a+*b;
}

int main()
{
    int a = 5, b = 7;
    void* location = &a;

    cout <<"Location of variable: " << location << "\n";

    cout <<"Overloaded addition: " << addition(a, b) << "\n";
    cout <<"Pointer addition: " << addition(&a, &b) << "\n";
}