#include <iostream>
using namespace std;

int main() {
	// menghitung luas segiempat
	float a;
	cout << "masukkan nilai sisi 1" << endl;
	cin >> a;
	float b;
	cout << "masukkan nilai sisi 2" << endl;
	cin >> b;
	float c;
	cout << "masukkan nilai sisi 3" << endl;
	cin >> c;
	double luasSegiempat = a * b * c;
	// menghitung luas segitiga
	float alas;
	cout << "input alas :" << endl;
	cin >> alas;
	float tinggi;
	cout << "input tinggi :" << endl;
	cin >> tinggi;
	double luasSegitiga = alas * tinggi / 2;
        // menghitung luas total
	double luastotal = luasSegiempat + luasSegitiga;
	cout << "jadi luas totalnya adalah :" << luasSegiempat + luasSegitiga
		 << endl;
	return 0;
}
