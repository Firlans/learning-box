#include<iostream>

using namespace std;

int main(){
    int input;

    cout << "masukan angka = ";
    cin >> input;

    if((input%2) == 0){
        for (int i=2; i<=input; i+=2){
            cout << i << ',';
        }
        cout << endl;
    }else if((input%2) == 1){
        for (int i=1; i<=input; i+=2){
            cout << i << ',';
        }
        cout << endl;
    }else{
        cout << "mohon masukkan angka" << endl;
    }

    return 0;
}