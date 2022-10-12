// Ability to give operators with a special meaning for a data type
// EX: Overloading '+' to concatenate Strings

#include <iostream>
#include <string>

using namespace std;

struct Person
{
    string name;

    Person(string pass)
    {
        name = pass;
    }

    Person operator+ (Person first, Person second)
    {
        
    }
};