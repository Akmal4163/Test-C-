#include <iostream>
#include<math.h>
using namespace std;


int main() {
cout<<"==============SOAL NOMOR 2=========="<<endl;
    //membuat input nilai x
    int x;
    cout<<"Masukkan nilai x"<<endl;
    cin>>x;
    //inisialisasi variabel y
    int pilihan;
    cout<<"masukkan soal yang akan dikerjakan:"<<endl;
    cout<<"1. 3x^2+4x+9"<<endl;
    cout<<"2. 9x^2-7x-5"<<endl;
    cin>>pilihan;
    //mengerjakan soal
    if(pilihan == 1){
        int pangkat = pow(3 * x, 2);
        int y = pangkat + 4 * x + 9;
        cout<<"jadi hasilnya adalah : "<<y<<endl;
    } else if(pilihan == 2){
        int pangkat = pow(9 * x, 2);
        int y = pangkat - 7 * x - 5;
        cout<<"jadi hasilnya adalah : "<<y<<endl;
    } else {
        cout<<"maaf tidak ada pilihan"<<endl;
    }
    return 0;
    
}
