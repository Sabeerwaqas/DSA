#include<iostream>

using namespace std;

int main (){
    
    int array[5] = {12, 50, 39, 34, 22};
    int index = array[0];
    int length = sizeof(array)/sizeof(array[0]);
    
      for(int i = 0; i <= length; i++) {
        if(array[i] > index){
            index = array[i];
        }
    }
    
    cout << "Index is: " << index << endl;
    
    return 0;
}