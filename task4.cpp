#include <iostream> //Header inclusion
using namespace std;

//Main function
int main(){
    int num;

    cout<<"Welcome to the Square Program, where we calculate the square ";
    cout<<"of any number. Remember, however, that your number must be ";
    cout<<"greater than 0. Let's start!\n"<<endl;

    //Continuous While loop with break and continue conditions
    while (true){
        cout<<"Please type in a number: ";
        cin>>num;
    
        if (num<0){
            cout<<"Invalid choice. Exiting the program.\n"<<endl;
            break;
        }

        else if (num==0){
            cout<<"Your number needs to be greater than 0.\n"<<endl;
            continue;
        }

        else{
            int SQUARE = num*num;
            cout<<"The square of the number you typed is: "<<SQUARE<<"\n"<<endl;
        }

    }
    return 0;
}