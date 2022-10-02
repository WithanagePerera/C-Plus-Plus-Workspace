// With normal pointers, pointer memory isn't deallocated unless you use the delete function
// This creates a memory leak
// As the function keeps running, the program will keep allocating new memory since noe of it is freed
// The entire heap memory becomes useless

// Smart pointers are a wrapper class over a pointer
// They automate the process of delete the pointer to free memory
// THere are 3 smart pointers: unique_ptr, shared_ptr, and weak_ptr

// unique_ptr stores a single pointer
// A different object can be assigend by removing the current object from the pointer
// They're called unique because you can't copy a unique pointer
// That's because if 2 pointers are pointing to the same memory and one pointer is destroyed to free it, the other pointer points to free memory

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
    unique_ptr<person> Praveen(new person(71, 16, 195));
}

// Functions List:
// release() = returns a pointer to the managed object and releases the ownership
// reset() = replaces the managed object
// swap() = swaps the managed objects
// get() = returns a pointer ot the managed object
// get_deleter() = returns the deleter that is used for destruction of the managed object