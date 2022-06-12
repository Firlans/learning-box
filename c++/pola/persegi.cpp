#include<iostream>

using namespace std;

int main(){
    int input;

    cout << "masukan angka = ";
    cin >> input;
    for(int i=1; i<=input; i++){
        for(int j=1; j<=input; j++){
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}