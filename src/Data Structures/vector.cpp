// Vectors are dynamic arrays with the ability to automatically resize
// Elements are in contiguous storage so they can be accessed and traversed using iterators
// Data is inserted at the end

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> test;
    for (int i = 0; i < 25; i++)
        test.push_back(i);


}

// swap(vector<T>) = exchanges contents of the container with another vector
// clear() = erases all elements from container, leaves capacity unchanged, but size is 0
// reserve(int size) = increases capacity without requiring reallocation
// shrink_to_fit() = requests removal of unused capacity
// erase(vector.begin()) = removes elements from position of iterator onward
// erase(vector.begin(), vector.end()-i) = removes elements between iterators
// push_back(T value) = appends new element to end of vector
// emplace_back(T object) = appends new element/object without you having to initialize that object, then copy it
// ^^Basically more efficient
// resize(int i) = resizes container to contain i elements.
        // If i is less than current size, container is reduced in size keeping the first i elements
        // If i is greater than the current size, either:
                                    // 1: additional default-inserted elements are appended
                                    // 2: additionalcopies of value (second argument in overloaded version of this function) are appended
// pop_back() = removes last element from container
// ^^If called on empty container, can result in undefined behavior