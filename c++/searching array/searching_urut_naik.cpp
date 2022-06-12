#include<iostream>
#define jmldat 8

using namespace std;

int BinSearch(int Data[], int n, int x, int *idx);

int main(){
    int data[jmldat]={7,10,13,16,18,21,76,81};
    int x, idx;

    for(int i=0; i<jmldat; i++){
        cout << data[i] << ' ';
    }
    cout << endl;

    cout << "masukan data yang ingin dicari = ";
    cin >> x;

    BinSearch(data, jmldat, x, &idx);
    if(idx!=-1){
        cout << "data yang dicari berada pada index " << idx << endl;
    }else{
        cout << "data yang dicari tidak ditemukan" << endl;
    }

    return 0;
}

int BinSearch(int Data[], int n, int x, int *idx){
    bool ketemu = false;
    int top = n-1, bottom = 0, mid;
    while(bottom<=top && !ketemu){
        mid=(top+bottom)/2;
        if(Data[mid]==x){
            ketemu=true;
        }else{
            if(Data[mid]>x){
                top=mid-1;
            }else{
                bottom=mid+1;
            }

        }
    }
    if(ketemu){
        return *idx=mid;
    }else{
        *idx=-1;
    }
}