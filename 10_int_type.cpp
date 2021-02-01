//program for diffrent type of int
#include <iostream>
#include <climits>
#include <cstdint>
#include <stdio.h>
#include <string>
using namespace std;
int main(){
    // normal  int value 
    int normal=23;
    cout << normal <<endl;  

    // very large number ,comipiler will warn,output doesn't match 
    int  large =12345678901;
    cout << large << endl;

    //using limits to know extreame value OF INT
    cout << " maximum value of integer = " << INT_MAX << endl; 
    cout << " minimum value of integer = " << INT_MIN << endl; 

    // SIZE OF VARIABLE
    cout << " SIZE OF INT =" << sizeof(int) << endl;

    return 0;
}