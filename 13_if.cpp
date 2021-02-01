// program for using of if 
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main(){

 string pass ="sam"  ;
 cout << " enter your password " << endl ;

 string input;
 cin >> input;

 if ( input == pass )
 {
    cout << " password is correct" ;
 }

if (input != pass)
{
    cout << "access denied" ;
}

 return 0;
}