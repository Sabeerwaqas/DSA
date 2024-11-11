#include<iostream>

using namespace std;

int linearSearch(int lengthOfArray, int array[], int numberToFind){
    
    for(int i = 0; i < lengthOfArray; i++){
        if(array[i] == numberToFind){
            return i;
        }
    }
    
    return -1;
    
}

int main(){
    
    // Write a program to find an index of a number and if
    // number is not present in an array than return 0
    
    int lengthOfArray;
    int numberToFind;
    
    // Taking array size
    
    cout << "Enter size of an array: " << endl;
    cin >> lengthOfArray;
    int array[lengthOfArray];
    
    // Getting values inside an array
    
    for(int i = 0; i < lengthOfArray; i++){
        cout << "Enter a number: " << endl;
        cin >> array[i];
    }
    
    // Getting number to find
    
    cout << "Enter a number that you want to find: " << endl;
    cin >> numberToFind;
    
    cout << linearSearch(lengthOfArray, array, numberToFind) << endl;

    
    return 0;
}