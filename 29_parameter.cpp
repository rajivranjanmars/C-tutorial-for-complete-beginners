#include <iostream>
#include <cstdio>
#include <string>
using namespace std;



void selection(int choice){

    const int number=3;

    

    switch (choice)
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
    

};
int getdata(){
    int value ;
    const int number=3;

    printf("ENter a value");
    cin >> value;
return value;
}
int main()
{
 int value=getdata();
selection(value);

}