#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 1. Declaration
    vector<int> arr;

    // 2. Adding elements
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);

    // 3. Accessing elements
    cout << "Element at index 2: " << arr[2] << endl;

    // 4. Updating an element
    arr[2] = 100;

    // 5. Traversing the vector
    cout << "Vector: ";
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 6. Size
    cout << "Size: " << arr.size() << endl;

    // 7. First element
    cout << "First element: " << arr.front() << endl;

    // 8. Last element
    cout << "Last element: " << arr.back() << endl;

    // 9. Insert at a specific index
    arr.insert(arr.begin() + 2, 25);

    cout << "After insertion: ";
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 10. Delete from a specific index
    arr.erase(arr.begin() + 2);

    cout << "After deletion: ";
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 11. Delete last element
    arr.pop_back();

    cout << "After pop_back: ";
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 12. Check if vector is empty
    if(arr.empty())
    {
        cout << "Vector is empty" << endl;
    }
    else
    {
        cout << "Vector is not empty" << endl;
    }

    // 13. Copying a vector
    vector<int> copy = arr;

    cout << "Copied vector: ";
    for(int i = 0; i < copy.size(); i++)
    {
        cout << copy[i] << " ";
    }
    cout << endl;

    // 14. Capacity
    cout << "Capacity: " << arr.capacity() << endl;

    // 15. Clear the vector
    arr.clear();

    cout << "Size after clear: " << arr.size() << endl;

    return 0;
}