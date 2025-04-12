#include <iostream> //Necessary headings
#include "swap2.h"
using namespace std;

//Main function with Swap call
int main(){
    float num1, num2;

    cout<<"Please type in a number: ";
    cin>>num1;

    cout<<"Now, type in another number: ";
    cin>>num2;

    Swap(num1, num2);

    SwapUsingPointers(&num1, &num2);

    SwapUsingReferences(num1, num2);

    return 0;

}