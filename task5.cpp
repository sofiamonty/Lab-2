#include <iostream> //Header inclusion
using namespace std;

int main(){
    int arr[]={2,4,6,8,10,12,14,16}; //Initial array

    /*Through the calculations below, the size of array 2 is set equal
    to that of the initial array*/
    int size = sizeof(arr)/sizeof(arr[0]);
    int arr2[size];

    int* ptr = arr; //Pointer integer to the original array

    cout<<"This is the original array: ";
    
    //The For loop prints each element in the original array
    for (int i=0; i<size; i++){
        cout<<*(ptr+i)<<" ";
    }

    /*The second For loop stores each element
    of array 1 in the new array in reverse order*/
    for(int i=0; i<size; i++){
        arr2[size-1-i]=*(ptr+i);
    }

    cout<<"\nAnd this is the new array: ";

    //Printing the new array elements
    for(int i=0; i<size; i++){
        cout<<arr2[i]<<" ";
    }
    return 0;
}