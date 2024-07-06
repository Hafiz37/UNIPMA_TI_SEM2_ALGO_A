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

int main() {
    float lebar1, lebar2, luas1, luas2, keliling1, keliling2;

    cout << "+++++++++++++++++++++++++++++" << endl;
    cout << "++ Program Contoh Prosedur ++" << endl;
    cout << "+++++++++++++++++++++++++++++" << endl;
    cout << "Masukkan Lebar Persegi Panjang ke I : ";
    cin >> lebar1;

    float panjang1 = 5;

    hitungLPP(lebar1, panjang1, luas1);
    cout << "Luas Persegi Panjang ke I adalah " << panjang1 << " x " << lebar1 << " = " << luas1 << endl << endl;
    cout << "Masukkan Lebar Persegi Panjang ke II : "; cin >> lebar2;
    float panjang2 = 5;
    hitungKPP(lebar2, panjang2, keliling2);
    cout << "Keliling Persegi Panjang ke II adalah (" << panjang2 << " + " << lebar2 << ") x 2 = " << keliling2 << endl << endl;

return 0;
}
