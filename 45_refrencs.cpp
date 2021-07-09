#include <iostream>
using namespace std;
void change(int &value) {
    value=110;
}
int main(){
    int value=8;
    int &value2=value;
    value2=10;
    cout <<"Value= " << value << endl;
    cout <<"Value2= " << value2 << endl;
    change(value);
    cout <<"Value= " << value << endl;
 return 0;
}