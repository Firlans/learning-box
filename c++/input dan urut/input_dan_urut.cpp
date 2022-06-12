#include<iostream>
#include<iomanip>
using namespace std;
struct mahasiswa{
    char nama[20];
    int umur;
};
int main(){
    int jumlah;
    cout << "masukan jumlah mahasiswa = ";
    cin >> jumlah;

    mahasiswa data[jumlah];
    for(int i=0; i<jumlah; i++){
        cout << "nama : ";
        cin >> ws;
        cin.getline(data[i].nama, 20);
        cout << "umur : ";
        cin >> data[i].umur;
    }
    cout << "|no|nama" << "\t\t|umur" << "\t\t|" << endl;
    for(int i=0; i<jumlah; i++){
        cout << "|" << i+1 << setw(2) << "|";
        cout << data[i].nama << "\t\t|";
        cout << data[i].umur << "\t\t|" << endl;
    }
}