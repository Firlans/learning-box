#include <iostream>

using namespace std;

void tampil(int *angka, int jumlah);
void urut(int *angka, int jumlah, int tmp);
int main(){
    int jumlah, tmp;

    cout<< "masukan jumlah angka yang akan diurutkan = ";
    cin >> jumlah;
    int angka[jumlah];

    for(int i=0; i<jumlah; i++){
        angka[i]=rand()%6;
    }
    cout << "angka sebelum diurutkan : ";
    tampil(angka, jumlah);

    cout << "angka setelah diurutkan : ";
    urut(angka, jumlah, tmp);

    tampil(angka, jumlah);
    return 0;
}
void tampil(int *angka, int jumlah){
    for(int i=0; i<jumlah; i++){
        cout << angka[i] << ", ";
    }
    cout << endl;
}
void urut(int *angka, int jumlah, int tmp){
    for(int i=0; i<jumlah; i++){
        for(int j=0; j<jumlah; j++){
            if(angka[j]>angka[j+1]){
                tmp=angka[j];
                angka[j]=angka[j+1];
                angka[j+1]=tmp;
            }
            cout << angka[j] << " ";
        }
        cout << endl;
    }
}