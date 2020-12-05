#include <iostream>
using namespace std;

int main(){
	int number[5];
	int i;
	int j;
	int tmp;
	cout<<"Descending Sort"<<endl;
	for(i = 0;i < 5;i++){
	    cout<<"input number: "<<(i + 1)<<endl;
	    cin>>number[i];
	}
	cout<<"before sorted: "<<endl;
	for(i =0;i < 5;i++){
	    cout<<number[i]<<""<<endl;
	}
cout<<"=============Sorting==========="<<endl;
//sort
    for(i = 0;i < 4;i++){
        for(j = (i+1);j < 5;j++){
            if(number[i]<number[j]){
               tmp = number[i];
               number[i] = number[j];
               number[j]= tmp;
            }
        }
    }
//after Sorting
cout<<"after sorted"<<endl;
for(i =0; i<5;i++){
    cout<<number[i]<<endl;
}
    return 0;	
}
