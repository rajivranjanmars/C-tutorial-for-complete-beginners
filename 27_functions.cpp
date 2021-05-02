#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
void selection(){
    int value ;
    const int number=3;

    printf("ENter a value");
    cin >> value;

    switch (value)
    {
    case 1:
    cout <<" starting" << endl;
        break;
    case 2:
    cout <<" processing" << endl;
        break;
    case number:
    cout <<" ending" << endl;
        break;
    
    default:
    cout << "unrecognized value";

    }
    

}
int main()
{
selection();

    
}