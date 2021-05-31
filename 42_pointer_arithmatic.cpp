#include <iostream>
using namespace std;
int main(){
    const int elements =5;
    string texts[elements]={"one", "two", "three", "four" , "five"};
    string *ptexts=texts;
    cout<< *(ptexts+2) << endl;
    ptexts+=3;
    cout<< *ptexts << endl;
    ptexts-=2;
   cout<< *ptexts << endl;

    string *pbegin=texts;
    string *pend=texts+elements-1;
    while (pbegin!=pend+1)
    {
     cout<< *pbegin << endl;
     pbegin++;
    }
    

 return 0;
}