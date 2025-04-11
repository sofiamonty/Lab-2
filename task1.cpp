#include <iostream> //Header inclusion
#include "multiply1.h"
using namespace std;


//Main function will output the result of each function based on user input
int main(){
    int num1, num2, num3, intresult;
    double num4, num5, num6, doubleresult, doubleresult2;

    //Asking for user input and outputting Part A
    cout<<"Let's multiply two integers. Please type in a number: ";
    cin>>num1;

    cout<<"Now, type in another number: ";
    cin>>num2;

    intresult = Multiply(num1, num2);

    cout<<"The product of the two integers is: "<<intresult<<endl;

    //Asking for user input and outputting Part B
    cout<<"\nNext, we'll multiply two doubles. Please type in a double number: ";
    cin>>num4;

    cout<<"And one more double: ";
    cin>>num5;

    doubleresult = Multiply(num4, num5);

    cout<<"The result of the two doubles multiplied is: "<<doubleresult<<endl;

    //Asking for user input and outputting Part C
    cout<<"\nFinally, we'll see what happens if we have a true or false flag.";
    cout<<" Please type in an integer: ";
    cin>>num3;

    cout<<"And now, type in a double: ";
    cin>>num6;
    
    //Part C with false flag
    doubleresult2 = Multiply(num3, num6, false);
    
    cout<<"This is the result of the two numbers multiplied together with a";
    cout<<" false flag (normal result): "<<doubleresult2<<endl;

    //Part C with true flag
    doubleresult2 = Multiply(num3, num6, true);

    cout<<"And this is the same result with a true flag (ceiled result): ";
    cout<<doubleresult2<<endl;

    return 0;
}
