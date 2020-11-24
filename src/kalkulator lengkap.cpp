#include <iostream>
using namespace std;


//menghitung luas persegi
void luaspersegi(){
    //memasukkan sisi pertama dari user
	float sisi;
	cout<<"masukkan sisi pertama: "<<endl;
	cin>>sisi;
	//menghitung luas persegi
	float hasil2= sisi * sisi;
	//menampilkan hasil
	cout<<"hasilnya :"<<hasil2;
}
//menghitung luas persegi panjang
void luaspersegipanjang(){
    //input panjang
    float panjang;
    cout<<"masukkan panjang: "<<endl;
	cin>>panjang;
	//input lebar
	float lebar;
    cout<<"masukkan lebar: "<<endl;
	cin>>lebar;
}
//menghitung luas segitiga
void luassegitiga(){
    float alas;
	cout<<"masukkan alas: "<<endl;
	cin>>alas;
	//memasukkan tinggi dari user
	float tinggi;
	cout<<"masukkan tinggi: "<<endl;
	cin>>tinggi;
	//menghitung luas segitiga
	float hasil = alas * tinggi / 2;
	//menampilkan hasil hitungan
	cout<<"hasilnya :"<<hasil;
}
//menghitung luas lingkaran
void luaslingkaran(){
    //menghitung luas lingkaran
    float Llingkaran;
    float r;
    const float phi = 3.14 ;
//proses awal 
    cout<<"masukkan jari-jari lingkaran: ";
    cin>>r;
    cout<<"phi = "<<phi<<endl;
 // rumus luas lingkaran
     Llingkaran = phi * r * r;
 // hasil perhitungan
     cout<<"maka luas lingkaran adalah = "<<Llingkaran<<"cm"<<endl;
}
    

int main() {
cout<<"==============SOAL NOMOR 4=========="<<endl;
//mengambil input pilihan
    int choices;
    cout<<"masukkan pilihan :"<<endl;
    cout<<"1. luas persegi"<<endl; 
    cout<<"2. luas persegi panjang" <<endl;
    cout<<"3. luas segitiga"<<endl; 
    cout<<"4. luas lingkaran" <<endl;
    cin>>choices;
    //memproses pilihan
    if(choices == 1){
        luaspersegi();
    } else if(choices == 2){
        luaspersegipanjang();
    } else if(choices == 3){
        luassegitiga();
    } else if(choices == 4){
        luaslingkaran();
    } else {
        cout<<"tidak ada pilihan"<<endl;
    }
    return 0;
    
}
