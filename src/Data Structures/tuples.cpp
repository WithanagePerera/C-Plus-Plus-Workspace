// Object that can hold a number of elements
// Used for storing multiple items in a single variable
// Elements can be different data types


#include <iostream>
#include <string>
#include <tuple>

using namespace std;

int main()
{
    tuple <string, int, bool> language;

    cout << "Language: \t Speed: \t Learned:" << endl;
    language = make_tuple("C++", 1, true);

    cout << get<0>(language) << "\t\t   " << get<1>(language) << "\t\t     " << get<2>(language) << "\n";
    cout << endl;

    get<0>(language) = "Java";
    get<1>(language) = 2;

    cout << get<0>(language) << "\t\t   " << get<1>(language) << "\t\t     " << get<2>(language) << "\n";
    cout << endl;
}