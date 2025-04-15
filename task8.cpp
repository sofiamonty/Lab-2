#include <iostream> //Header inclusion
using namespace std;

int main(){
    //Initial integer value and reference
    int int1;
    int& ref1 = int1;

    //Number chosen based on user input
    cout<<"Please choose one number: ";
    cin>>int1;

    //Small explanation as to what will happen
    cout<<"\n\nThe value of the number you chose is "<<int1;
    cout<<". Pointer ref1 is a reference to this number.";
    cout<<"\nLet's see what happens if we modify that reference ";
    cout<<"by adding 5."<<endl;

    //Modifying the reference and outlining the
    ref1=int1+5;

    cout<<"\nThe new value for the reference is: "<<ref1<<endl;
    cout<<"And the new value for the original number is: "<<int1<<endl;

    return 0;
}