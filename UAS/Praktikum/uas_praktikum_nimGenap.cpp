#include <iostream>
#include <string>
using namespace std;

// function untuk menghitung luas persegi panjang
double hitungLPP(double panjang, double lebar){
    return panjang * lebar;
}

// function untuk menghitung luas segitiga
double hitungLST(double alas, double tinggi){
    return (alas * tinggi) / 2;
}

// function untuk menghitung luas yang diarsir
double luasDiarsir(double panjang, double lebar, double alas, double tinggi){
    double luasPP = hitungLPP(panjang, lebar);
    double luasST = hitungLST(alas, tinggi);
    return luasPP - luasST;
}

// function untuk membuat garis penghias
string garis(string model, int panjang, int jmlhEndl){
    string result;

    for(int i = 0 ; i < panjang ; i++) result += model;
    for(int i = 0 ; i < jmlhEndl ; i++) result += "\n";

    return result;
}



int main() {
    char lanjut;

    do{
        double panjang, lebar, alas, tinggi;

        cout << garis("<>", 23, 1);
        cout << " MENGHITUNG LUAS PERSEGI PANJANG DAN SEGITIGA\n";
        cout << "DAN LUAS PERSEGI PANJANG YANG DILUAS SEGI TIGA\n";
        cout << garis("<>", 23, 2);

        cout << garis("~", 38, 1);
        cout << "Masukkan panjang persegi panjang : ";
        cin >> panjang;
        cout << "Masukkan lebar persegi panjang   : ";
        cin >> lebar;
        cout << "Masukkan alas segitiga           : ";
        cin >> alas;
        cout << "Masukkan tinggi segitiga         : ";
        cin >> tinggi;
        cout << garis("~", 38, 2);

        double luasArsir = luasDiarsir(panjang, lebar, alas, tinggi);
        

        cout << garis("-", 31, 1);
        cout << "         HASILNYA ADLAH\n";
        cout << garis("-", 31, 1);
        cout << "Luas persegi panjang = " << hitungLPP(panjang, lebar) << " cm\n";
        cout << "Luas segi tiga       = " << hitungLST(alas, tinggi) << " cm\n";
        cout << garis("-", 31, 1);
        cout << garis("=", 29, 1);
        cout << "Luas yang di arsir   = " << luasArsir << " cm\n";
        cout << garis("=", 29, 2);

        cout << garis("<>", 22, 1);
        cout << "Apakah anda ingin mengulangi lagi? (y/n) : ";
        cin >> lanjut;
        cout << garis("<>", 22, 2);

    } while (lanjut == 'y' || lanjut == 'Y');

    cout << garis("<>", 32, 1);
    cout << "   Terimakasih Sudah Menggunakan, sampai jumpa kembali.\n";
    cout << garis("<>", 32, 2);

}
