// why float not always works in if 
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main(){
  float f=1.1;

// forking with if in float

if (f==1.1)
{
  cout << " it is working";
}
else
  cout << " it is not working here";
// most probably won't work because float value changes in decimal
 return 0;
}
