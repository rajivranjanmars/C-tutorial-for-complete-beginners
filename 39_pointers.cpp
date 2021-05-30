#include <iostream>

using namespace std;
void manipulate(double *dvalue){
    cout << "2. value of dvalue in manipulate is " << *dvalue << endl;
    *dvalue = 10.0;
    cout << "3. value of dvalue in manipulate   is " << *dvalue << endl;
}
int main(){
    int nvalue = 8;
    int *pnvalue = &nvalue;

    cout << " value of nvalue is " << nvalue << endl;
    cout << " value of pnvalue is " << pnvalue << endl;
    cout << " value of *pnvalue is " << *pnvalue << endl;

    cout << "=================================================" << endl;

    double dvalue = 123.4;
    cout << "1. value of dvalue is " << dvalue << endl;
    manipulate(&dvalue);
    cout << "4. value of dvalue is " << dvalue << endl;

    return 0;
}