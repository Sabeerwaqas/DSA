#include <iostream>

using namespace std;

int main()
{

    /*
    1. An array is a collection of items of similar types stored in
        contiguous memory locations.

    2. Sometimes, a simple variable is not enough to hold all the data.

    3. For example, lets say we want to store the marks of 5 students,
        having 100 different variables to store the different student marks is not a good approach.

    4. To solve this problem, we can define an array with size of 100 that can hold the marks of 5 students.

    */

    int studentMarks[5] = {75, 45, 60, 33, 9};

    cout << "The value of index is: " << studentMarks[0] << endl;
    cout << "The value of index is: " << studentMarks[1] << endl;
    cout << "The value of index is: " << studentMarks[2] << endl;
    cout << "The value of index is: " << studentMarks[3] << endl;
    cout << "The value of index is: " << studentMarks[4] << endl;

    // Pointers

    int * poinForStudentMarks = studentMarks;

    cout << poinForStudentMarks << endl;

    return 0;
}