#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main(){

    int values[]={1,2,3,4,5,6};

    cout << sizeof(values) << endl ; // 6*sizeof(int)
    cout << sizeof(int) << endl ;      // depends on compiler 

    for (int i = 0; i < sizeof(values)/sizeof(int); i++)
    {
        cout << values[ i ] << endl ;
    }
    
              
 return 0;
}
