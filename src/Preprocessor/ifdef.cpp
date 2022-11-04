// ifdef allows a section of the program to obe compiled, only if the macro
// that is specific as the parameter has been defined
// EX:
// #ifdef size
// vector <int, size>
// #endif
// Only works if size was initialized to a value before
// Since it isn't, the vector declaration won't be included

#include <iostream>
#include <string>

using namespace std;

string first_name = "Praveen";

#ifdef first_name
cout << first_name;
#endif

#ifdef last_name
cout << lasT_name;
#endif