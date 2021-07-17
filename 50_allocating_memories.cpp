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

Animal createAnimal(){
    Animal a;
    return a;
    a.setName("doggo");
}
int main(){
           
    Animal *animal = new Animal[10];
    animal[5].setName("cheems");
    animal[5].speak();
    delete [] animal;

    Animal dog=createAnimal();
    dog.speak();
    cout << sizeof(dog) << endl;
              
 return 0;
}