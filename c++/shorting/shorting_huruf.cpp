#include <iostream>

using namespace std;

void tampil(char []);
void urut(char *);
int main(){
    char huruf[26]={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m'};
    cout << "sebelum huruf diurutkan : ";
    tampil(huruf);
    cout << "setelah huruf diurutkan : ";
    urut(huruf);
    tampil(huruf);

    return 0;   
}
void tampil(char huruf[]){
    for(int i=0; i<26; i++){
        cout << huruf[i] << ", ";
    }
    cout << endl;
}
void urut(char *huruf){
    int tmp;
    for(int i=0; i<=26; i++){
        for(int j=i+1; j<26; j++){
            if(huruf[i]>huruf[j]){
                tmp=huruf[j];
                huruf[j]=huruf[i];
                huruf[i]=tmp;
            }
        }
    }
}