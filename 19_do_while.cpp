#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main(){
 // const  value can not be chaged later in programming , doing so would give  error
     const string password = "hello";

     string input;

    do
    {
        cout << "enter your password" << endl;

         cin >> input;

         if (input!= password)
         {
             cout << "access denied " << endl;
         }
         
    } while (input!= password);   // loop will go on until we does not enter input equal to password
    


    cout << "password accepted " << endl ;

 return 0;
}