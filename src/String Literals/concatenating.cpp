#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
using namespace std:: string_literals;

int main()
{
    // Concatenating strings
    string greeting = "Hello"s + " Praveen";
    // s is an operator function that returns an std string

    cout << greeting << endl;

    // Can also use different chars
    wstring greeting2 = L"Hello"s + L" Praveen";
    u16string greeting3 = u"Hello"s + u" Praveen";
    u32string greeting4 = U"Hello"s + U" Praveen";

    cout << "Size of wide string greeting is: " << sizeof(greeting2) << endl;
    cout << "Size of u16 string greeting is: " << sizeof(greeting3) << endl;
    cout << "Size of u32 string greeting is: " << sizeof(greeting4) << endl;
}