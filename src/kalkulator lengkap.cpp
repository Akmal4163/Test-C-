#include<iostream>
using namespace std;

double persegipanjang(){
  int panjang;
  cout<<"panjang:\n ";
  cin>>panjang;
  int lebar;
  cout<<"lebar:\n ";
  cin>>lebar;
  return panjang * lebar;
}

double setengahlingkaran(){
  const float phi = 3.14;
  float r;
  cout<<"jari-jari: \n";
  cin>>r;
  return 2 * phi * r / 2;
}

double persegi(){
  float sisi;
  cout<<"sisi: \n";
  cin>>sisi;
  return 2 * sisi;
}

double segitiga(){
  float alas;
  cout<<"ALAS : \n";
  cin>>alas;
  float tinggi;
  cout<<"tinggi: \n";
  cin>>tinggi;
  return alas * tinggi /2;
}

void jumlah(){
  cout<<"result: "<<persegipanjang()+setengahlingkaran()+persegi()+segitiga()<<endl;
}
int main(){
  jumlah();
  return 0;
}
