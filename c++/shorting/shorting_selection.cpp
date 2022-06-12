#include <iostream>

using namespace std;
void tampil(int data[10]){
    for(int i=0; i<10; i++){
        cout << data[i] <<", ";
    }
    cout << endl;
}
int main(){
    int tmp;
    int data[10]={10,40,20,60,15,4,8,100,200,25};
    cout << "data sebelum diurutkan = ";
    tampil(data);

    cout << "data setelah diurutkan = ";
    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++){
            if(data[j]>data[i]){
                tmp=data[i];
                data[i]=data[j];
                data[j]=tmp;
            }
        }
    }
    tampil(data);

    return 0;
}