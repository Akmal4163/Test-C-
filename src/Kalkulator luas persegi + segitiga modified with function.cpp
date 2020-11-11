#include <iostream>
using namespace std;


//membuat fungsi untuk menghitung luas segitiga
void luasSegitiga(){
	//memasukkan alas dari user
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
//membuat fungsi untuk menghitung luas persegi
void luasPersegi(){
	//memasukkan sisi pertama dari user
	float sisi;
	cout<<"masukkan sisi pertama: "<<endl;
	cin>>sisi;
	//menghitung luas persegi
	float hasil2= sisi * sisi;
	//menampilkan hasil
	cout<<"hasilnya :"<<hasil2;
}

int main(){
	//mengambil inputan dari user dan menyuruh user untuk memilih
	int choices;
	cout<<"pilih rumus yang akan dihitung"<<endl;
	cout<<"1. luas segitiga"<<endl;
	cout<<"2. luas persegi"<<endl;
	cin>>choices;
	//menyuruh user untuk memilih
	if(choices == 1){
		//memanggil fungsi luas segitiga
		luasSegitiga();
	} else if(choices == 2){
		//memanggil fungsi luas persegi
		luasPersegi();
	} else {
		cout<<"tidak ada di pilihannya !!!"<<endl;
	}
	
	return 0;
}
