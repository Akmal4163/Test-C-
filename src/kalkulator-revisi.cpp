#include <iostream>
using namespace std;
//Program Utama
int main () {
    int pilih;
    char ulang;
    
    
    do {
        cout<<"========================================"<<endl;
        cout<<"| Program Kalkulator |"<<endl;
        cout<<"========================================"<<endl;
        cout<<"| 1. jumlah |"<<endl;
        cout<<"| 2. pengurangan |"<<endl;
        cout<<"| 3. perkalian |"<<endl;
        cout<<"| 4. pembagian|"<<endl;
        cout<<"========================================"<<endl;
        cout<<"Pilihan Anda : "<<endl;
        cin>>pilih;
        //memasukkan angka
        float bil1,bil2;
        cout<<"Masukkan Angka Pertama"<<endl;
        cin>>bil1;
        cout<<"masukkan angka kedua"<<endl;
        cin>>bil2;
        if(pilih == 1) {
	       float penjumlahan =bil1+bil2;
	       cout<<"hasilnya adalah: "<<penjumlahan;
        } else if(pilih == 2){
           float pengurangan =bil1-bil2;
           cout<<"hasilnya adalah: "<<pengurangan;
        } else if(pilih == 3){
          float perkalian = bil1*bil2;
          cout<<"hasilnya adalah: "<<perkalian;
        } else if(pilih == 4){
            float pembagian =bil1/bil2;
            cout<<"hasilnya adalah: "<<pembagian;
        } else {
            cout<<"tidak ada pilihan"<<endl;
        }
        cout<<" Kembali ke Menu Utama ? (Y/T) :"<<endl;
        cin>>ulang;
        cout<<"========================================"<<endl;
}

while(ulang=='y' || ulang=='t');
    


   return 0;
}

