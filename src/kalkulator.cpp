#include<iostream>

using namespace std;

int main() {
    //membuat input angka
    float number1;
    cout<<"Masukkan Angka Pertama"<<endl;
    cin>>number1;
    float number2;
    cout<<"masukkan angka kedua"<<endl;
    cin>>number2;
    //membuat pilihan operator
    int bil;
    cout<<"masukkan operator"<<endl;
    cout<<"1. + "<<endl;
    cout<<"2. - "<<endl;
    cout<<"3. * "<<endl;
    cout<<"4. / "<<endl;
    cin>>bil;

    if(bil == 1) {
        int penjumlahan = number1 + number2;
        cout<<"hasilnya adalah: "<<penjumlahan;
    }
    if(bil == 2) {
        int pengurangan = number1 - number2;
        cout<<"hasilnya adalah: "<<pengurangan;
    }
    if(bil == 3) {
        int perkalian = number1 * number2;
        cout<<"hasilnya adalah: "<<perkalian;
    }
    if(bil == 4) {
        int pembagian = number1 / number2;
        cout<<"hasilnya adalah: "<<pembagian;
    }
    else {
        cout<<"tidak ada pilihannya";
    }
    return 0;


}
