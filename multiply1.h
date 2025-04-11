#ifndef MULTIPLY1_H
#define MULTIPLY1_H

#include <iostream>
#include <cmath>
using namespace std;

//Multiply function with integer parameters - Part A
int Multiply(int a, int b){
    return a * b;
}

//Multiply function with double parameters - Part B
double Multiply(double a, double b){
    return a * b;
}

//Multiply function with integer, double and flag - Part C
double Multiply(int a, double b, bool flag){
    double result = a * b;

    if(!flag){
       return result;
    }
    
    else{
        return ceil(result);
    }
}

#endif
