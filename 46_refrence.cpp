#include <iostream>
using namespace std;
    class Animal {
    private:
        string name;
    public:
     void setName(string name){this->name;};
     void speak(){
         cout <<  "my name is " << name << endl;
     }
    };
int main(){
         
 return 0;
}