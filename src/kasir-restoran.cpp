#include<iostream>
using namespace std;
/*
 * Berikut ini adalah langkah-langkah dalam pengerjaan soal nomor 3
 * 1. Buat Pesanan
 * 2. Tentukan Diskon
 */

int main() {
float x;
int menu1=3000;
int menu2=5000;
int menu3 = 12500;
int menu4 = 15000;
int menu5 = 20000;
int menu6 = 17500;
int jumlah1,jumlah2,jumlah3,jumlah4,jumlah5,jumlah6,total,bayar;

    cout<<"============================================\n";
    cout<<"  Program Kasir Restoran\n";
    cout<<"============================================"<<endl;
    cout<<endl;

   cout<<"Menu : Es teh, harganya: "<<menu1<<endl; 
   cout<<"Jumlah Produk   : ";
   cin>>x;
   jumlah1 = x * menu1;
   cout<<"Total Harga   : Rp. "<<jumlah1<<endl;cout<<endl;

   cout<<"Menu  : es campur harganya: "<<menu2<<endl;
   cout<<"Jumlah Produk   : ";
   cin>>x;
   jumlah2 = x * menu2;
   cout<<"Total Harga   : Rp. "<<jumlah2<<endl;cout<<endl;
   
   cout<<"Menu  : Es teler harganya: "<<menu3<<endl; 
   cout<<"Jumlah Produk   : ";
   cin>>x;
   jumlah3 = x * menu3;
   cout<<"Total Harga   : Rp. "<<jumlah3<<endl;cout<<endl;
   
   cout<<"Menu : Nasi Goreng harganya: "<<menu4<<endl; 
   cout<<"Jumlah Produk   : ";
   cin>>x;
   jumlah4 = x * menu4;
   cout<<"Total Harga   : Rp. "<<jumlah4<<endl;cout<<endl;

   cout<<"Menu : Nasi Geprek harganya: "<<menu5<<endl; 
   cout<<"Jumlah Produk   : ";
   cin>>x;
   jumlah5 = x * menu5;
   cout<<"Total Harga   : Rp. "<<jumlah4<<endl;cout<<endl;

   cout<<"Menu : Nasi Penyet harganya: "<<menu6<<endl; 
   cout<<"Jumlah Produk   : ";
   cin>>x;
   jumlah6 = x * menu6;
   cout<<"Total Harga   : Rp. "<<jumlah4<<endl;cout<<endl;

   bayar = jumlah1 + jumlah2 + jumlah3 + jumlah4 + jumlah5 + jumlah6;
   cout<<endl;
   cout<<"============================================"<<endl;
   cout<<"Sub Total   : Rp. "<<bayar<<endl;
    if (bayar > 100000) {
        total = bayar * 0.10;
        cout<<"Anda Mendapatkan Diskon 10% \n";
        cout<<"Harganya Menjadi: "<<total<<endl;
    } else {
        cout<<"Tidak Mendapatkan Diskon \n";
    }
    
    int uang;
    int kurang;
    int kembalian;
    cout<<"masukkan uang: \n";
    cin>>uang;
    if(uang > total){
        kembalian = uang - total;
        cout<<"kembalian anda: "<<kembalian<<endl;
    } else if(uang < total){
        kurang = total - uang;
        cout<<"Kurang: "<<kurang<<endl;
    } else {
        cout<<"uang pas \n";
    }
    return 0;
}
