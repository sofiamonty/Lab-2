#include <iostream> //Header inclusion
#include "students6.h"
using namespace std;

//Main function
int main() {
    int option, count = 0;
    Student students[5];

    //Introductory message
        cout<<"Welcome to the Student Hub. Here are the options you can choose from:"<<endl;
        cout<<"1. Add a student.\n2. Display student list."<<endl;
        cout<<"3. Search for a student by ID.\n4. Exit the program."<<endl;
   
    //Do-While loop allows to continuously perform actions
    do{
        cout<<"\nPlease select your option: ";
        cin >> option;

        //Switch calling different functions
        switch(option) {
            case 1:{
                AddStudent(students, count);
                break;
            }
            case 2:{
                DisplayStudents(students, count);
                break;
            }
            case 3:{
                SearchStudent(students, count);
                break;
            }
            case 4:{
                cout<<"Exiting the program.";
                break;
            }
            default:{
                cout << "Invalid option! Exiting the program." << endl;
                option = 4;
                break;
            }
        }
    }
    while(option!=4);

    return 0;
}
