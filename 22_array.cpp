#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main(){
    int value[3];
// declaring  and printing every element one by one 
    value[0]=1;
    value[1]=2;
    value[2]=3;

    cout << "array of ints" << endl ;

    cout << value[00] << endl ;
    cout << value[01] << endl ;
    cout << value[02] << endl ;

/// declaring and  printing all elements in one go 

    cout << "array of ints" << endl ;
    double nums[4] ={ 2.2 ,4.4,6.6};

    for (int i = 0; i < 4; i++) /// here 4th element is not initilized
    {
        cout << nums[i] << endl ;
    }
    
    cout << "array of  string" << endl ;

    string text[]={  "apple" , "banana" , "orange"} ;
    
    for (int i = 0; i < 4; i++) /// here 4th element is not initilized
    {
        cout << text[i] << endl ;
    }
    





 return 0;
}