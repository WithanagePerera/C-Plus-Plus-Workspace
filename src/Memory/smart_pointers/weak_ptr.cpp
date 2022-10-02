// With normal pointers, pointer memory isn't deallocated unless you use the delete function
// This creates a memory leak
// As the function keeps running, the program will keep allocating new memory since noe of it is freed
// The entire heap memory becomes useless

// Smart pointers are a wrapper class over a pointer
// They automate the process of delete the pointer to free memory
// There are 3 smart pointers: unique_ptr, shared_ptr, and weak_ptr

// Weak pointers are similar to shared pointers
// Instead of increasing the reference counter, it remains the same while still making a copy
// The weak pointer still points to the memory, but if the reference count gets to 0, it will still be destroyed, evenif the weak pointer exists
// With a weak pointer, you can check if a memory address is still allocated or not
// You can ask if you are expired or still referencing a location

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
    weak_ptr<person> First_Share;
    shared_ptr<person> Second_Share;
    // Creating different scopes to demonstrate reference counting
    {
        shared_ptr<person> Praveen(new person(71, 16, 195));
        First_Share = Praveen;
        Second_Share = Praveen;
        cout << "Allocated memory and weak pointer points to person." << endl;
        cout << "Printing number of shared pointers: " << First_Share.use_count() << endl;
    }

    cout << "\nExited initial scope, primary pointer is destroyed." << endl;
    cout << "Checking number of shared pointers: " << First_Share.use_count() << endl;
    cout << "Checking status of memory: ";
    if (First_Share.expired())
        cout << "Object has been deleted and memory is deallocated.\n" << endl;
}

// Functions List:
// reset() = releases the ownership of the managed object
// swap() = swaps the managed objects
// use_count() = returns number of shared_ptr objects that manage the object
// expired() = checks whether referenced object was already deleted
// lock() = creates shared_ptr that manages referenced object
// owner_before() = provides owner_based orderering of weak pointers