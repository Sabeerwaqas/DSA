#include <iostream>

using namespace std;

/*
    List:

    => A list is a collection of items that are all of the same types(grocery items, integers, and names).
    => The items, or elements are stored in some particular order.
    => It is possible to insert new elements into various positions in the list and remove any element
    of the list.
    => List is a set of elements in a linear order.
        For example: data values a1, a2, a3, a4 can be arranged in a list:
        (a3, a1, a2, a4)
    In the above list, a3 is the first element, a1 is the second element and so on.
    => The order is important here, this is not just a random collection of elements, it is an ordered
    collection.

    Following are the some list operations in C++

    createList() => create a new list (presumably empty)
    copy()       => set one list to be a copy of other
    clear()      => clear a list (remove all elements)
    insert(x, ?) => insert element X at particular position in the list
    remove(?)    => remove element at some position in the list
    update(x, ?) => replace the element at a given position with X
    find(x)      => determine if the element X is in the list
    length()     => return the length of the list
    get()        => return A[current]
    back()       => current--
    begin()      => current = 0
    end          => current = size

    To use the operation in which ? is given, we need to move current pointer and following
    methods are use for this purpose

    start()     => moves the "current" pointer to the very first element
    tail()      => moves the "current" pointer to the very last element
    next()      => moves the current position forward one element
    back()      => moves the current position backward one element
*/

int main()
{

    // list of names

    list<string> personNames = {"John", "Stephen", "Edward"};
    // cout << personNames.front() << endl;
    // cout << *next(personNames.begin()) << endl;
    // cout << *next(personNames.begin(), 2) << endl;

    // list of OS

    list<string> operatingSys = {"Android", "iPhone", "Linux"};

    // cout << operatingSys.front() << endl;
    // cout << *next(operatingSys.begin()) << endl;
    // cout << *next(operatingSys.begin()) << endl;

    for (string OS : operatingSys)
    {
        cout << OS << endl;
    }

    // Access first element

    cout << operatingSys.front() << endl;

    // Access last element

    cout << operatingSys.back() << endl;

    operatingSys.front() = "Windows";

    cout << operatingSys.front() << endl;

    operatingSys.back() = "macOS";
    cout << operatingSys.back() << endl;

    // Add element in the list

    operatingSys.push_front("Kali Linux");

    cout << operatingSys.front() << endl;

    operatingSys.push_back("Ubuntu");

    cout << operatingSys.back() << endl;

    operatingSys.pop_front();

    cout << operatingSys.front() << endl;

    operatingSys.pop_back();

    cout << operatingSys.back() << endl;

    cout << operatingSys.empty() << endl;

    return 0;
}
