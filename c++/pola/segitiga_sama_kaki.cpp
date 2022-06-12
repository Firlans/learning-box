#include<iostream>

using namespace std;

int main(){
    int input;

    cout << "masukan angka = ";
    cin >> input;
    for(int i=1; i<=input; i++){
        for(int j=input; j>=i; j--){
            cout << ' ';
        }
        for(int j=1; j<=i; j++){
            cout << '*';
        }
        for(int j=1; j<i; j++){
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}