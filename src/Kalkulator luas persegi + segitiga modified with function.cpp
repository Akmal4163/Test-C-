#include<iostream>

void luasSegitiga()
{
    double alas, tinggi;
    std::cout << "masukkan alas\n";
    std::cin >> alas;
    std::cout << "masukkan tinggi\n";
    std::cin >> tinggi;
    double luas = alas * tinggi / 2;
    std::cout << "luas segitiga:" << luas << std::endl;
}

void luasPersegi()
{
    double sisi;
    std::cout << "masukkan sisi\n";
    std::cin >> sisi;
    double luaspersegi = sisi * sisi;
    std::cout << "luas persegi:" << luaspersegi << std::endl;
}

int main()
{
    int pilih;
    std::cout << "pilih rumus: 1. luas segitiga 2. luas persegi" << std::endl;
    std::cin >> pilih;
    if (pilih == 1) {
        luasPersegi();
    } 
    else if (pilih == 2) {
        luasSegitiga();
    }
    else {
        std::cout << "invalid operator" << std::endl;
    }

    return 0;
    
}
