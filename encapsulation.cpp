#include <iostream>
using namespace std;

class Frog{
    private:
    string name;
    string getname() {
        return name ;
    }
    public:
    Frog ( string name ) : name( name ) {}
    void info(){
        cout << "My name: " << getname() << endl;
    }
};

int main(){
    Frog frog("thor");
    frog.info();      
              
 return 0;
}