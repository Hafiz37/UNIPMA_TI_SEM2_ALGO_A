#include <iostream>
using namespace std;

// membuat function untuk menghitung volume balok
int hitungVol(int panjang, int lebar, int tinggi){
    int result = panjang * lebar * tinggi;

    // function mengembalikan hasil dari rumus volume
    return result;
}

// membuat function untuk membuat garis penghias
string garis(string model, int panjang, int jmlhEndl){
    string result;

    for(int i = 0 ; i < panjang ; i++) result += model;
    for(int i = 0 ; i < jmlhEndl ; i++) result += "\n";

    return result;
}

int main(){
    int panjang, lebar, tinggi;

    cout << garis("<>", 32, 1);
    cout << "Membuat Algoritma Penghitung Volume Sebuah Balok Persegi Panjang" << endl ;
    cout << garis("<>", 32, 2);

    // meminta user untuk memasukkan panjang lebar dan tinggi
    cout << garis("~", 33, 1);
    cout << "Masukkan Nilai Yang Anda Inginkan" << endl;
    cout << garis("~", 33, 1);

    cout << " Panjang   = ";
    cin >> panjang;

    cout << " Lebar     = ";
    cin >> lebar;

    cout << " Tinggi    = ";
    cin >> tinggi;

    //memanggil function hitungVol dengan mengisi parameter dengan inputan user
    cout << garis("-", 33, 1);
    cout << " Jadi hasil volumenya adalah = " << hitungVol(panjang, lebar, tinggi) << endl;
    cout << garis("-", 33, 1);

    return 0;
}
