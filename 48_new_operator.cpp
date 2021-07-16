#include <iostream>

using namespace std;

class Animal
{
private:
string name;
public:
    Animal(/* args */);
    ~Animal();
    Animal(const Animal & other) : name(other.name){
        cout << " animal  by  coopy" << endl;
    }
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
           
    Animal *animal1 = new Animal();
    animal1->setName("cheems");

    animal1->speak();
    delete animal1;
    cout << sizeof(animal1);
              
 return 0;
}