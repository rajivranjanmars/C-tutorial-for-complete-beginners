#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main(){
  string zoo[][3]={
                        {"peacock", "eagle" ,"parrot"},
                        {"lion" , "tiger", "elephant"}

                   };
       
        cout << sizeof(zoo) <<endl;
        cout << sizeof(zoo[0]) <<endl;
        cout << sizeof(string) <<endl;
        


    for (int i = 0; i < sizeof(zoo)/sizeof(zoo[0]); i++)
    {
        for (int j = 0; j < sizeof(zoo[0])/sizeof(string); j++)
        {
            cout<< zoo[i][j] << " " << flush;
        }
        cout << endl;
    }
    

 return 0;
}