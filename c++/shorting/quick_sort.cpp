#include <iostream>

using namespace std;

void tukar(int*a, int*b){
    int t=*a;
    *a=*b;
    *b=t;
}
int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i =(low-1);
    for(int j=low; j<high; j++){
        if(arr[j]<=pivot){
            i++;
            tukar(&arr[i], &arr[j]);
        }
    }
    tukar(&arr[i+1], &arr[high]);
    return i+1;
}
void quick_sort(int arr[], int low, int high){
    if(low<high){
        int pivot = partition(arr, low, high);
        quick_sort(arr, low, pivot-1);
        quick_sort(arr, pivot+1, high);
    }
}
void display(int array[], int size){
    for(int i=0; i<size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[]={12,23,3,43,51,35,19,45};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "input array" << endl;
    display(arr, n);
    quick_sort(arr, 0, n-1);
    display(arr, n);

    return 0;
}