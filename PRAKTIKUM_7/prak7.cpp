#include <iostream>

using namespace std;

// procedure untuk menghitung luas persegi panjang
void hitungLPP(float lebar, float panjang, float &luas) {
    luas = lebar * panjang;
    }

//  procedure untuk menghitung keliling persegi panjang
void hitungKPP(float lebar, float panjang, float &keliling) {
    keliling = (2 * lebar) + (2 * panjang);
    }

//  Procedure untuk membuat garis untuh menghias output
void garis(string model, int jmlhEndl) {
    int pBar = 20;
    for (int i = 0; i < pBar; i++) cout << model; 
    for (int i = 0; i < jmlhEndl; i++)cout<< endl;
}

int main() {
    float lebar1, lebar2, luas1, luas2, keliling1, keliling2;

    garis("<>", 1);
    cout << "       Program Contoh Prosedur" << endl;
    garis("<>", 2);

    // meminta user untuk memasukkan Lebar segitiga ke 1
    cout << "Masukkan Lebar Persegi Panjang ke I : ";
    cin >> lebar1;

    float panjang1 = 5;

    // memanggil procedure hitungLPP
    hitungLPP(lebar1, panjang1, luas1);

    // menampilkan hasil luas persegi panjang
    cout << "Luas Persegi Panjang ke I adalah " << panjang1 << " x " << lebar1 << " = " << luas1 << endl;
    garis("--", 1);
    
    // meminta user untuk memasukkan lebar segitifa ke 2
    cout << "Masukkan Lebar Persegi Panjang ke II : ";
    cin >> lebar2;

    // memanggil procedure keliling persegi panjang
    float panjang2 = 5;
    hitungKPP(lebar2, panjang2, keliling2);

    // menampilkan hasil keliling persegi panjang
    cout << "Keliling Persegi Panjang ke II adalah (" << panjang2 << " + " << lebar2 << ") x 2 = " << keliling2 << endl;
    garis("--", 2);

return 0;
}