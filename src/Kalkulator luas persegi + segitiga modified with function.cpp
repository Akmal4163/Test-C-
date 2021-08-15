#include <iostream>


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

void luasLingkaran()
{
    double r;
    const float phi = 3.14;
    std::cout << "masukkan jari-jari\n";
    std::cin >> r;
    double luaslingkaran = phi * r * r;
    std::cout << "luas lingkaran:" << luaslingkaran << std::endl;
}

int main()
{
    int pilih;
    std::cout << "pilih rumus: 1. luas segitiga 2. luas persegi 3. luas lingkaran" << std::endl;
    std::cin >> pilih;
    if (pilih == 1) {
        luasPersegi();
    } 
    else if (pilih == 2) {
        luasSegitiga();
    }
    else if (pilih == 3) {
        luasLingkaran();
    }
    else {
        std::cout << "invalid operator" << std::endl;
    }

    return 0;
    
}
