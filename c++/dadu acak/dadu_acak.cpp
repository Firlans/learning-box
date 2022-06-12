#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int tebak, angka;
    char lanjut;
    while(true){
        angka = rand()%6;
        cout << "masukan angka tebakan anda = ";
        cin >> tebak;

        if(tebak == angka){
            cout << "tebakan anda benar" << endl;
        }else{
            cout << "tebakan anda salah" << endl;
            cout << "angkanya adalah " << angka << endl;
        }

        cout << "mau lanjut(y/n) : ";
        cin >> lanjut;
        if(lanjut == 'y' || lanjut == 'Y'){
            true;
        }else if(lanjut == 'n' || lanjut == 'N'){
            break;
        }else{
            cout << "masukan y untuk ya atau n untuk tidak" << endl;
        }
    }
    cout << "terima kasih" << endl;

    return 0;
}