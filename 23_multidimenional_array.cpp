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
  
  // alternate method to print output
   cout << endl << endl;
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
