#include <iostream>
using namespace std;
int main(){
                              
    char text[]="malyalama ";
    int nChars=sizeof(text)-1; 
    char *pstart= text;
    char *pend=text+nChars-1;
    while (pstart<pend){
        char temp=*pstart;
        *pstart=*pend;
        *pend=temp;
        pstart++;
        pend--;
    }
    cout << text << endl;
    
}