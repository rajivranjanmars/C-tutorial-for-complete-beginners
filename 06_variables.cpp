//program for diffrent vaiables
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main(){     
int vowels=5;
int consonants=21;
float decimal = 3.14;
char letter1='a';
string sentance =" a string of characters";

cout << " number of vowels="   << vowels <<endl;
// addition of variables
int letters=vowels +consonants;
cout << " number of consonant=" << consonants <<endl;
cout << " total number of letters=" << letters << endl;
// value update in variable
letters=2;
cout << " number of semi vowel= " << letters << endl;
cout << " value of pi="<< decimal<<endl;
cout << " the 1st vowel is "<< letter1 <<endl;
cout << " all of this makes "<< sentance;
}