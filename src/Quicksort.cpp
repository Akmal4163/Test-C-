#include <iostream>
using namespace std;

void show(int arr[], int size) {
    for(int i = 0;i < size; i++){
        cout<<arr[i]<<" "<<endl;
    }
}

int partition(int arr[], int low,int high){
    int pivot = arr[high];
    int i = (low - 1);
    for(int j = low; j < high;j++){
        if(arr[j] <= pivot){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } 
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return(i + 1);
    
}

void quicksort(int arr[], int low, int high) {
    if(low < high){
        int p = partition(arr,low,high);
        quicksort(arr,low,p -1);
        quicksort(arr,p + 1,high);
    }
}
int main() {
    int size;
    cout<<"masukkan banyaknya data"<<endl;
    cin>>size;
    int arr[size];
    cout<<"masukkan nilai"<<endl;
    for(int i = 0;i < size;++i){
        cout<<"\n";
        cin>>arr[i];
    }
    quicksort(arr,0,size);
    cout<<"sorted array\n";
    show(arr,size);
    return 0;
}
