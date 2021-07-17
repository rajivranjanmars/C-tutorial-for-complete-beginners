#include <iostream>

using namespace std;
void show1(const int n, string texts[]){
    cout << "size of texts in show1 " << sizeof(texts) << endl;

    for (int i = 0; i < n; i++){
        cout << texts[i] << endl;
    }
}

void show2(const int n, string *texts){
    cout << "size of texts in show2 " << sizeof(texts) << endl;

    for (int i = 0; i < n; i++){
        cout << texts[i] << endl;
    }
}
void show3(string (&texts)[3]){
    cout << "size of texts in show3 " << sizeof(texts) << endl;

    for (int i = 0; i < sizeof(texts) / sizeof(string); i++){
        cout << texts[i] << endl;
    }
}

int main(){

    string texts[] = {"one", "two", "three"};
    cout << "size of texts in main " << sizeof(texts) << endl;
    show1(3, texts);
    show2(3, texts);
    show3(texts);

    return 0;
}