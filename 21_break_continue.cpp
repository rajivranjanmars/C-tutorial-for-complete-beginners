#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main()
{
        int i;

        for ( i = 0; i < 10; i++)

        {

            if (i==2)
            continue;

            // program will nor run for i=2 as continue statement skips further elements from loop
            cout << "i is  " << i << endl; 
        

         if(i==6)
         break;
                                                // break throws out program from the loop
        cout << "looping ........ " << endl ;  


        }

        cout << "program quitting " << endl ;  
                 
 return 0;
}