#include<iostream>
using namespace std;

void celcius(){
    int choice;
    cout<<"1. Reamur 2. Fahrenheit 3. Kelvin \n";
    cin>>choice;
    if(choice == 1){
      double reamur;
      cout<<"reamur: \n";
      cin>>reamur;
      double countR = 5 * reamur / 4;
      cout<<"result: "<<countR<<endl;
    } else if(choice == 2){
      double fhr;
      cout<<"fahrenheit: \n";
      cin>>fhr;
      double countfhr = 5 * (fhr-32) / 9;
      cout<<"result: "<<countfhr<<endl;
    } else if(choice == 3){
      double kelvin;
      cout<<"kelvin: \n";
      cin>>kelvin;
      double resultklv = kelvin - 273;
      cout<<"result: "<<resultklv<<endl;
    }else {
      cout<<"not found \n";
    }
}

void reamur(){
    int choice;
    cout<<"1. Celcius 2. Fahrenheit 3. Kelvin \n";
    cin>>choice;
    if(choice == 1){
      double celcius;
      cout<<"celcius: \n";
      cin>>celcius;
      double countC = 4 * celcius / 5;
      cout<<"result: "<<countC<<endl;
    } else if(choice == 2){
      double fhr;
      cout<<"fahrenheit: \n";
      cin>>fhr;
      double countfhr = 4 * (fhr - 32) / 9;
      cout<<"result: "<<countfhr<<endl;
    } else if(choice == 3){
      double kelvin;
      cout<<"kelvin: \n";
      cin>>kelvin;
      double resultklv = 4 * (kelvin - 273) /5;
      cout<<"result: "<<resultklv<<endl;
    }else {
      cout<<"not found \n";
    }
}

void fahrenheit(){
    int choice;
    cout<<"1. Celcius 2. Reamur \n";
    cin>>choice;
    if(choice == 1){
      double celcius;
      cout<<"celcius: \n";
      cin>>celcius;
      double countC = 9 * (celcius + 32) / 5;
      cout<<"result: "<<countC<<endl;
    } else if(choice == 2){
      double reamur;
      cout<<"reamur: \n";
      cin>>reamur;
      double countR = 9 * (reamur + 32) / 4;
      cout<<"result: "<<countR<<endl;
    } else {
      cout<<"not found \n";
    }
}

void kelvin(){
    int choice;
    cout<<"1. Celcius 2. Reamur \n";
    cin>>choice;
    if(choice == 1){
      double celcius;
      cout<<"celcius: \n";
      cin>>celcius;
      double countC = celcius + 32;
      cout<<"result: "<<countC<<endl;
    } else if(choice == 2){
      double reamur;
      cout<<"reamur: \n";
      cin>>reamur;
      double countR = 5 * (reamur + 32) / 4;
      cout<<"result: "<<countR<<endl;
    } else {
      cout<<"not found \n";
    }
}

int main(){
  int choices;
    cout<<"masukkan yang akan dihitung : 1. celcius, 2. reamur 3.fahrenheit 4.kelvin"<<endl;
    cin>>choices;
    //mengerjakan rumus
    if(choices == 1){
      celcius();
    } else if(choices == 2){
      reamur();
    } else if(choices == 3){
      fahrenheit();
    } else if(choices == 4){
      kelvin();
    } else {
        cout<<"not found"<<endl;
    }
  return 0;   
}
