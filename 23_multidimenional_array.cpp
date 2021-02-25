#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main(){
  string zoo[2][3]={
                        {"peacock", "eagle" ,"parrot"},
                        {"lion" , "tiger", "elephant"}

                   };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << zoo[i][j ]<< "     " ;
        }
        
        cout << endl;
    }
  
 return 0;
}
