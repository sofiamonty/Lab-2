#ifndef SWAP2_H
#define SWAP2_H

#include <iostream>
using namespace std;

//Simple swap function - Part A
void Swap(float a, float b){
    float c;
    c=a;
    a=b;
    b=c;

    cout<<"\nAfter a simple swap, your new first number is: "<<a;
    cout<<". And your new second number is: "<<b<<endl;
}

//Swap function using pointers - Part B
void SwapUsingPointers(float* a, float* b){
    float c=*a;
    *a=*b;
    *b=c;

    cout<<"\nAfter a swap with pointers, this is your new first number: "<<*a;
    cout<<". And this is your new second number: "<<*b<<endl;

    cout<<"However, the swap with pointers will affect the swap with references, if ";
    cout<<"left unchanged. So, inside the code, the values are restored to their ";
    cout<<"original version, so the next swap can be performed successfully."<<endl;

    /*Numbers are reuturned to their original value so that next function
    is unaffected */
    c=*b;
    *b=*a;
    *a=c;
}

//Swap function with references - Part C
void SwapUsingReferences(float &a, float &b){
    float c=a;
    a=b;
    b=c;

    cout<<"\nAfter a swap with references, this is your new first number: "<<a;
    cout<<". And this is your new second number: "<<b<<endl;
}

#endif