#include <iostream>
using namespace std;
int main(){

// printing string array through normal methods

string texts[3]={"one", "two", "three"};

for (int i = 0; i < sizeof(texts)/sizeof(string); i++)
cout << texts[i] << " " << flush;
cout << endl;

// printing string array through  pointer increment methods

string *point =&texts[0];

for (int i = 0; i < sizeof(texts)/sizeof(string);i++)
cout << *(point +i ) << " " << flush;
cout << endl;

// printing string array through pointer compare methods

string *pbeg= &texts[0];
string *pend= &texts[2];
while (true){
    cout << *(pbeg )<< " " << flush;
    if (*pbeg ==*pend)
    break;
    *pbeg++;
}


 return 0;
}