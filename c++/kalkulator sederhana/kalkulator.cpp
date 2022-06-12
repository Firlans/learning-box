#include<iostream>

using namespace std;

int main(){
    char op;
    int a;
    float b, hasil;

    cout << "masukan nilai 1 = ";
    cin >> a;
    cout << "masukan operator (+,-,/,*)= ";
    cin >> op;
    cout << "masukan nilai 2 = ";
    cin >> b;
    switch(op){
        case '+':
            hasil=a+b;
            break;
        case '-':
            hasil=a-b;
            break;
        case '/':
            hasil=a/b;
            break;
        case '*':
            hasil=a*b;
            break;
        default:
            cout << "harap masukan angka dan operator dengan benar" << endl;
    }

    cout << hasil << endl;
    return 0;
}