#include <iostream>

using namespace std;

class Animal
{
private:
string name;
public:
    Animal(/* args */);
    ~Animal();
    void setName(string name){ this->name = name;};
    void speak() const { cout << "My name is " << name << endl;}
};

Animal::Animal(/* args */)
{
    cout<<"Animal created" << endl;
}

Animal::~Animal()
{
        cout<<"Animal dead" << endl;

}


int main(){
           
    Animal animal1;
    animal1.setName("cheems"); 
    Animal animal2=animal1;
    animal2.setName("doggo");

    animal1.speak();
    animal2.speak();

              
 return 0;
}