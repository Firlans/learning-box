#include<iostream>

using namespace std;
void SeqSearch(int Dara[], int n, int x, int *idx);

int main(){
    int Data[]={23, 56, 10, 90, 35, 45, 9, 11, 20, 65};
    int idx, x, JmlDat=10;
    cout << "elemen array = ";
    for(int i=0; i<JmlDat; i++){
        cout << Data[i] << ' ';
    }
    cout << endl;
    cout << "masukan angka yang ingin dicari = ";
    cin >> x;

    SeqSearch(Data, JmlDat, x, &idx);
    if(idx!=-1){
        cout << "data yang dicari ditemukan" << endl;
        cout << "berada pada index [" << idx << ']' << endl;       
    }else{
        cout << "data yang dicari tidak ditemukan" << endl;
    }

    return 0;
}
void SeqSearch(int Data[], int n, int x, int *idx){
    for(int i=0; i<n; i++){
        if(Data[i]==x){
            *idx=i;
            break;
        }else{
            *idx=-1;
        }
    }
}