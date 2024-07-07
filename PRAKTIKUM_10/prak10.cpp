#include <iostream>
#include <string>
#include <iomanip> // untuk fixed dan setprecision
using namespace std;

// membuat function untuk menghitung tunjangan
float hitungTunjangan(float gajiPokok) {
    return gajiPokok * 0.1; // Tunjangan sebesar 10% dari gaji pokok
}

// membuat function untuk menghitung total gaji
float hitungTotalGaji(float gajiPokok, float tunjangan) {
    return gajiPokok + tunjangan;
}

// membuat function untuk membuat garis penghias
string garis(string model, int panjang, int jmlhEndl){
    string result;

    for(int i = 0 ; i < panjang ; i++) result += model;
    for(int i = 0 ; i < jmlhEndl ; i++) result += "\n";

    return result;
}

int main() {
    string nama, alamat;
    float gajiPokok, tunjangan, totalGaji;
    
    cout << garis("<>", 19, 1);
    cout << "      Menghitung Gaji Karyawan\n";
    cout << "Tunjangan sebesar 10% dari gaji pokok\n";
    cout << garis("<>", 19, 2);

    // meminta user untuk memasukkan Nama, Alamat dan GaPok
    cout << garis("~", 35, 1);
    cout << "Masukkan Nama      : ";
    getline(cin, nama); // Menggunakan getline untuk membaca string dengan spasi
    cout << "Masukkan Alamat    : ";
    getline(cin, alamat);
    cout << "Masukkan Gaji Pokok: ";
    cin >> gajiPokok;
    cout << garis("~", 35, 2);

    tunjangan = hitungTunjangan(gajiPokok);
    totalGaji = hitungTotalGaji(gajiPokok, tunjangan);

    // menampilkan total gaji dengan fixed dan setprecision
    cout << garis("-", 45, 1);
    cout << fixed << setprecision(2);   // setprecision mengatur dua angka di belakang koma
                                        // fixed digunakan untuk memastikan bahwa angka ditampilkan dalam format desimal tetap.
    cout << "Total Gaji yang diterima adalah " << totalGaji << endl;
    cout << garis("-", 45, 2);

    return 0;
}
