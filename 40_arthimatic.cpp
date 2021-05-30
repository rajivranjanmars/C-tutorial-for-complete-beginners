#include <iostream>

using namespace std;
int main(){
/* 
*   +
*   -
*   * 
*   /
*   %
*   +=
*   -=
*   *=
*   /=
*   %=
*   ++
*   --
*/
    int a = 50, b = 20;
    cout << "Value of a and b is " << a << " & " << b << endl;
    cout << "Value of a+b is " << a + b << endl;
    cout << "Value of a-b is " << a - b << endl;
    cout << "Value of a*b is " << a * b << endl;
    cout << "Value of a/b is " << a / b << endl;
    cout << "Value of a%b is " << a % b << endl;
    cout << "Value of ++a is " << ++a << endl;
    cout << "Value of --a is " << --a << endl;
    cout << "Value of a++ is " << a++ << endl;
    cout << "Value of a-- is " << a-- << endl;
    a += b;
    cout << "Value of a+=b is " << a << endl;
    a -= b;
    cout << "Value of a-= is " << a << endl;
    a *= b;
    cout << "Value of a*=b is " << a << endl;
    a /= b;
    cout << "Value of a/=b is " << a << endl;
    a %= b;
    cout << "Value of a%=b is " << a << endl;
    return 0;
}