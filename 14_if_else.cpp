// programme for basic if else statement
// two digit calculator

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main(){
    int a,b;
    // getting two nunbers 
    cin >> a >> b;
    cout << " press + for addition" << endl;
    cout << " press - for substraction" << endl;
    cout << " press * for multiplication" << endl;
    cout << " press / for division" << endl;

// getting the operation
    char op;
    cin >> op;

// final calculation
    if (op == '+')
     cout << a+b ;  
    else if(op == '-')
    cout << a-b;
    else if(op == '*')
    cout << a*b;
    else 
    cout << a/b;


 return 0;
}