#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main(){
                 
   ios_base::sync_with_stdio(false);
cin.tie(NULL);     

string name= "Bob";
int age=32;

stringstream ss;
ss << " Name: " << name;
ss << " age: " << age;


cout << ss.str() << endl;
              
 return 0;
}