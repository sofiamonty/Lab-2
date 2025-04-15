#ifndef STUDENTS6_H
#define STUDENTS6_H

#include <iostream>
using namespace std;

//Student struct according to instructions
struct Student{
    char name[50];
    int id;
    float grade;
};

/*Function to add students. Int count is used as a 
 main reference, as it appears also in subsequent functions*/
void AddStudent(Student students[], int &count){
   
    if(count>5){
        cout << "You have exceeded the maximum number of students." << endl;
    }

    else{
        cout << "Please write the student name: ";
        cin >> students[count].name;

        cout << "Now, please enter the ID: ";
        cin >> students[count].id;

        cout << "Finally, please enter the grade: ";
        cin >> students[count].grade;

        cout << "Student added successfully!" << endl;

        count++;
    }
}

//Function to display student data
void DisplayStudents(Student students[], int count){
    
    if(count==0){
        cout<<"There are no students to display so far."<<endl;
    }
   
    else{
        for(int i=0; i<count; i++){
        cout<<"Student name: "<<students[i].name;
        cout<<". ID: " <<students[i].id;
        cout<<". Grade: " <<students[i].grade<<"."<<endl;
        }
    }
}

//Function to search for a student based on ID
void SearchStudent(Student students[], int count){

    int sID;

    if(count==0){
        cout<<"There are no students to search for yet."<<endl;
    }

    else{
        cout<<"Please enter the ID of the student you're searching for: ";
        cin>>sID;

        for(int i=0; i<count; i++){
            if(sID==students[i].id){
            cout<<"This is the student you're looking for: ";
            cout<<students[i].name<<". ID: "<<students[i].id;
            cout<<". Grade: "<<students[i].grade<<"."<<endl;
            }
        }
    }
}

#endif