#include <iostream>
using namespace std;


//menghitung fahrenheit
void fahrenheit(){
    float celcius = 30;
    float fhr = 9 * celcius + 32 / 5;
    cout<<"jadi hasilnya : "<<fhr;
}
//menghitung reamur
void reamur(){
    float celcius = 30;
    float hitungreamur = 4 * celcius / 5;
    cout<<"jadi hasilnya : "<<hitungreamur;
}


int main() {
cout<<"==============SOAL NOMOR 3=========="<<endl;
    //inisialisasi variabel celcius
    cout<<"nilai celcius = 30"<<endl;
    //membuat input pilihan
    int choices;
    cout<<"masukkan yang akan dihitung : 1. fahrenheit, 2. reamur"<<endl;
    cin>>choices;
    //mengerjakan rumus
    if(choices == 1){
        fahrenheit();
    } else if(choices == 2){
        reamur();
    } else {
        cout<<"tidak ada pilihan"<<endl;
    }
    return 0;
    
}
