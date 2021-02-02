//  complex conditions in cpp
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

/*
 *     ==   equality test
 *     !=   not equals
 *     <    less than
 *     >    greater than
 *     <=   less than or equal to
 *     >=   greater than or equal to
 *     &&   and operator
 *     ||   or operator  
 */


int main(){
    int value1=7, value2= 4;

        // condition 1  checking equality operator
     if (value1 == 7 )     
     {
         cout << " Condition 1 : true " << endl ; // value1 is 7 which is equal to 7 , so this statement will be executed.
     }
     else 
     {
         cout << " Condition 1 : false " << endl ; // the if statement is true so else satement will not execute.
     }
     
        // condition 2 checking not equal operator
     if (value1 != 8 )     // condition 2
     {
         cout << " Condition 2 : true " << endl ; // value1 is 7 which is  not equal to  8 , so this statement will   be executed.
     }
     else 
     {
         cout << " Condition 2 : false " << endl ; // the if statement is true so else satement will not  execute.
     }

        //condition 3 checks less than operator 
     if (value1 < 8 )     // condition 3
     {
         cout << " Condition 3 : true " << endl ; // value1 is 7 which is less than 8 , so this statement will be executed.
     }
     else 
     {
         cout << " Condition 3 : false " << endl ; // the if statement is true so else satement will not execute.
     }

        // condition 4 checks greter  than operator
     if (value1 > 8 )     // condition 1
     {
         cout << " Condition 4 : true " << endl ; // value1 is 7 which is not  greater than 8 , so this statement will not  be executed.
     }
     else 
     {
         cout << " Condition 4 : false " << endl ; // the if statement is true so else satement will  execute.
     }


        // condition 5 checks less than or equal to
     if (value1 <= value2 )     // condition 5
     {
         cout << " Condition 5 : true " << endl ; // value1 is 7 which is not less than or equal to value 2 which is 4 , so this statement will not  be executed.
     }
     else 
     {
         cout << " Condition 5 : false " << endl ; // the if statement is false so else satement will  execute.
     }


     //condition 6 checks greater than or equal to
     if (value1 >= value2 )     // condition 6
     {
         cout << " Condition 6 : true " << endl ; // value1 is 7 which is greater than 4 , so this statement will be executed.
     }
     else 
     {
         cout << " Condition 6 : false " << endl ; // the if statement is true so else satement will not be execued
     }

    
      //condition 7 checks and operator
     if ( value1 >= value2 && value1 ==7 )     // condition 6
     {
         cout << " Condition 7 : true " << endl ; // value1 is 7 which is greater than 4  and at the same time value1 is equal to 7 , so this statement will be executed.
     }
     else 
     {
         cout << " Condition 7 : false " << endl ; // the if statement is true so else satement will not be execued
     }
 

      //condition 8 checks or operator
     if (value1 <= value2 || value1 > 0  )     // condition 6
     {
         cout << " Condition 8 : true " << endl ; // value1 is 7 which is not lesser than than value2 which is 4 but value1 is greater than 0 , so this statement will be executed.
     }
     else 
     {
         cout << " Condition 8 : false " << endl ; // the if statement is true so else satement will not be execued
     }

 return 0;
}