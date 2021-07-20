#include <iostream>
using namespace std;

class Animal{   
public:
   void speak(){
      cout << "I am a Animal" << endl; 
   }
};
class Cat: public Animal{ 
   public:
   void jump(){
      cout << " cat is jumping" << endl;
   } 
};

class Tiger: public Cat{ 
   public:
   void attack(){
      cout << " attack" << endl; 
   }
};


int main(){
                 
   Animal a;
   a.speak();

   Cat cat;
   cat.jump();
   cat.speak();

   Tiger tiger;
   tiger.attack();
   tiger.jump();       
   tiger.speak(); 
              
              
 return 0;
}