#include <iostream>
using namespace std;

// membuat function untuk menghitung volume balok
int hitungVol(int panjang, int lebar, int tinggi){
    return panjang * lebar * tinggi;
}

int main(){
    int panjang, lebar, tinggi;

    cout << endl ;
    cout << "Membuat Algoritma Penghitung Volume Sebuah Balok Persegi Panjang" << endl ;
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl << endl;

    cout << "((((((((Masukkan Nilai Yang Anda Inginkan))))))))" << endl;
    cout << "(((()))) Panjang   = ";
    cin >> panjang;

    cout << "(((()))) Lebar     = ";
    cin >> lebar;

    cout << "(((()))) Tinggi    = ";
    cin >> tinggi;

    cout << "(((()))) Jadi hasil volumenya adalah = " << hitungVol(panjang, lebar, tinggi) << endl; //memanggil function hitung balok dengan mengisi parameter dengan inputan user

    return 0;
}
