// program for diffrent type of float
#include <iostream>
#include <climits>
#include <stdio.h>
#include <string>
#include <iomanip>
using namespace std;
int main(){
    // normal  float value 
    float normal=23.123456789;
    cout << normal <<endl; 

    // scientific value  & precision
    cout << scientific << normal <<endl; 
    cout << setprecision(20) << fixed << normal <<endl; 

    // very large number ,comipiler will warn,output doesn't match 
    float  large =12345678901;
    cout << large << endl;

    // SIZE OF VARIABLE
    cout << " SIZE OF float = " << sizeof(float) << endl;

    // long double value
    long double lvalue =123.45678912345;
    cout << setprecision(20) << fixed << lvalue <<endl; 
    cout << " size of long double " << sizeof(lvalue) << endl;
    return 0;
}