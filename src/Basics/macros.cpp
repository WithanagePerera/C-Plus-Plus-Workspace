// Macros are pieces of code that are replaced by the value of the macro
// Macros are defined using the #define directive
// Whenever the compiler encounters a macro, it replaces the name with the macro definition
// Macro definitions do NOT need to end in a semi-colon

#include <iostream>
#include <string>

using namespace std;

#define PI 3.14
#define QUESTION cout << "What is your name?" << endl;
#define ANSWER cin >> 

int main()
{
    string name;
    cout << "The approximate value of PI is " << PI;
    QUESTION;
    ANSWER name;
    cout << name;
}