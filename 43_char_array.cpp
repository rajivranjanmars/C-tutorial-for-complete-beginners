#include <iostream>

using namespace std;
int main(){
char text[]={"hello"};

for(int i=0; i <sizeof(text);i++){
    cout<<text[i];
}
cout<<endl;
for(int i=0; i <sizeof(text);i++){
    cout<<i+1<<" "<<text[i] <<endl; 
}
int k=0;
while (text[k]){
    cout<<text[k];
    k++;
}            
 return 0;
}