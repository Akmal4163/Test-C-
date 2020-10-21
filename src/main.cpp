#include <iostream>


using namespace std;

int main() {
//memasukkan alas segitiga
float alas;
cout<<"masukkan alas segitiga"<<endl;
cin>>alas;
float tinggi;
cout<<"masukkan tinggi segitiga"<<endl;
cin>>tinggi;
float luas = alas*tinggi/2;
cout << "jadi, luasnya adalah: " << luas <<endl;

return 0;
}