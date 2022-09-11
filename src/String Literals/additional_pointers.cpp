#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Creates const char array of characters
    // Used with UTF-8
    const char* name = "Praveen";
    const char* name1 = u8"Praveen";

    // Creates const char array of wide characters
    // Each char is given 2 bytes, or maybe 4 bytes depending on the compiler
    // On Windows, it's typically 2 bytes
    // On Mac and Linux, it's typically 4 bytes
    const wchar_t* name2 = L"Praveen";

    // Each char is given 2 bytes (16 bits) used for UTF-16
    const char16_t* name3 = u"Praveen";

    // Each char is given 4 bytes (32 bits) used for UTF-32
    const char32_t* name4 = U"Praveen";
    
    cout << "The size of a regular char is: " << sizeof(char) << endl;
    cout << "The size of a wide char is: " << sizeof(wchar_t) << endl;
    cout << "The size of a char16_t is: " << sizeof(char16_t) << endl;
    cout << "The size of a char32_t is: " << sizeof(char32_t) << endl;
}