#include<iostream>
using namespace std;
/*
 * Berikut ini adalah langkah-langkah dalam pengerjaan soal nomor 2
 * 1. Buat Pesanan
 * 2. Tentukan Diskon
 */

int main() {
float x;
int produk1=5000;
int produk2=15000;
int produk3 = 23000;
int produk4 = 75000;
int jumlah1,jumlah2,jumlah3,jumlah4,total,bayar;

    cout<<"============================================\n";
    cout<<"  Program Kasir Toko Bangunan\n";
    cout<<"============================================"<<endl;
    cout<<endl;

   cout<<"Nama Produk 1  : paku, harganya: "<<produk1<<endl; 
   cout<<"Jumlah Produk   : ";
   cin>>x;
   jumlah1=x*produk1;
   cout<<"Total Harga   : Rp. "<<jumlah1<<endl;cout<<endl;

   cout<<"Nama Produk 2  : meteran harganya: "<<produk2<<endl;
   cout<<"Jumlah Produk   : ";
   cin>>x;
   jumlah2=x*produk2;
   cout<<"Total Harga   : Rp. "<<jumlah2<<endl;cout<<endl;
   
   cout<<"Nama Produk 3  : palu harganya: "<<produk3<<endl; 
   cout<<"Jumlah Produk   : ";
   cin>>x;
   jumlah3=x*produk3;
   cout<<"Total Harga   : Rp. "<<jumlah3<<endl;cout<<endl;
   
   cout<<"Nama Produk 4  : semen harganya: "<<produk4<<endl; 
   cout<<"Jumlah Produk   : ";
   cin>>x;
   jumlah4=x*produk4;
   cout<<"Total Harga   : Rp. "<<jumlah4<<endl;cout<<endl;

   bayar=jumlah1+jumlah2+jumlah3+jumlah4;
   cout<<endl;
   cout<<"============================================"<<endl;
   cout<<"Sub Total   : Rp. "<<bayar<<endl;
    if(bayar >= 300000){
       total = bayar*0.15;
       cout<<"dapat diskon 15%, jadi:"<<total<<endl;
    } else if((bayar <= 150000) && (bayar < 300000)){
        total = bayar*0.10;
        cout<<"dapat diskon 10%, jadi:"<<total<<endl;
    } else if(bayar < 150000){
        cout<<"maaf tidak mendapat diskon \n";
    } else {
        cout<<"maaf tidak mendapat diskon \n";
    }
    int uang;
    int kembalian;
    cout<<"masukkan uang: \n";
    cin>>uang;
    if(uang > bayar){
        kembalian = uang - total;
        cout<<"kembalian anda: "<<kembalian<<endl;
    } else {
        cout<<"uang pas \n";
    }
    return 0;
}
