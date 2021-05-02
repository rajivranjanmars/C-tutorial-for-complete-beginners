#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int selection(){
    int value ;
    const int number=3;

    printf("ENter a value");
    cin >> value;

    return value;
}
int main(){
    int value=selection();
    switch (value)
    {
    case 1:
    cout <<" I am in case 1" << endl;
        break;
    case 2:
    cout <<" I am in case 2" << endl;
        break;
    case 3:
    cout <<" I am in case 3" << endl;
        break;
    case 4: 
    cout <<" I am in case 4" << endl;
        break;
    case 5:
    cout <<" I am in case 5" << endl;
        break;
    case 6:
    cout <<" I am in case 6" << endl;
        break;
    default:
    cout << "unrecognized value";

    }
    
 return 0;
}