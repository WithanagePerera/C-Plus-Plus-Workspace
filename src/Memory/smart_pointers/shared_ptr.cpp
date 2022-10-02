// With normal pointers, pointer memory isn't deallocated unless you use the delete function
// This creates a memory leak
// As the function keeps running, the program will keep allocating new memory since noe of it is freed
// The entire heap memory becomes useless

// Smart pointers are a wrapper class over a pointer
// They automate the process of delete the pointer to free memory
// There are 3 smart pointers: unique_ptr, shared_ptr, and weak_ptr

// With shared pointers, multiple pointers can point to memory at a time
// Memory is deallocated using a system of reference counters
// The value of reference counters are the number of shared pointers pointing to a memory location
// When that value reaches 0 (all shared pointers are destroyed) the memory is deallocated

#include <iostream>
#include <memory>
// ^^Include memory header to access smart pointers

using namespace std;

class person
{
    public:
    int height;
    int age;
    int weight;

    person(int h, int a, int w)
    {
        height = h;
        age = a;
        weight = w;

        std::cout << "\nPerson of height: " << weight << " lbs., weight: " << height << " inches and age: " << age << " years was created." << endl;
    }

    ~person()
    {
        std::cout << "Person was destroyed and memory was deallocated automatically.\n" << endl;
    }
};

int main()
{
    shared_ptr<person> First_Share;
    // Creating different scopes to demonstrate reference counting
    {
        shared_ptr<person> Praveen(new person(71, 16, 195));
        First_Share = Praveen;
    }

    cout << "\nExited initial scope, primary pointer is destroyed. \n" << endl;
}

// Functions List:
// reset() = replaces the manage object
// swap() = swaps the managed object
// get() = returns the stored pointer
// use_count() = returns number of shared_ptr objects referring to the same managed object
// unique() = checks whether the managed object is managed only by the current shared_ptr
// owner_before() = provides owner-based ordering of shared pointers