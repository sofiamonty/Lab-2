#include <iostream> //Header inclusion
using namespace std;

int main(){
    //Establishing variables and pointer variables
    int num;
    int* p1 = &num;
    int* p2 = p1;

    //Asking for user input
    cout<<"Please, choose a number: ";
    cin>>num;

    //Explaining what is happening
    cout<<"The first pointer p1 stores the value and address for "<<num;
    cout<<". The second pointer p2 stores the value of p1.\n"<<endl;
    cout<<"Now, let's see what happens when p1";
    cout<<" is changed via a multiplication by 2."<<endl;

    //Changing the value of p1
    *p1=num*2;

    //Observed change in p2 and num
    cout<<"\nThis is the new value of p1: "<<*p1;
    cout<<"\nThis is the value of p2: "<<*p2;
    cout<<"\nAnd this is the value of the initial number: "<<num<<endl;

    return 0;
}