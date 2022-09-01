// Stores elements in key/value pairs
// Reference key to retrieve values
// Implemented using Hash Table

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    // Initialize unordered map
    unordered_map<int, string> speed;
    
    // Insert values
    speed.insert({1, "C"});
    speed.insert({2, "C++"});
    speed.insert({3, "Rust"});
    speed.insert({4, "C#"});
    speed.insert({5, "Fortran"});
    speed.insert({6, "Julia"});
    speed.insert({7, "Chapel"});
    speed.insert({8, "Ada"});
    speed.insert({9, "Haskell"});
    speed.insert({10, "OCaml"});

    // Iterating using begin() and end()
    for (auto i = speed.begin(); i != speed.end(); i++)
    {
        // Data is unordered so printing elements won't be in order
        cout << i->first << "\t" << i->second << "\n";
    }
}