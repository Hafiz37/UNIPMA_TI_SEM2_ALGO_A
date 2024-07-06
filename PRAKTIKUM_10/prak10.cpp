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

int main() {
    string nama, alamat;
    float gajiPokok, tunjangan, totalGaji;
    
    cout << endl;
    cout << "Menghitung Gaji Karyawan\n\n";
    cout << "Tunjangan sebesar 10% dari gaji pokok\n";
    cout << "---------------------\n\n";

    cout << "Masukkan Nama: ";
    getline(cin, nama); // Menggunakan getline untuk membaca string dengan spasi
    cout << "Masukkan Alamat: ";
    getline(cin, alamat);
    cout << "Masukkan Gaji Pokok: ";
    cin >> gajiPokok;

    tunjangan = hitungTunjangan(gajiPokok);
    totalGaji = hitungTotalGaji(gajiPokok, tunjangan);

    // menampilkan total gaji dengan fixed dan setprecision
    cout << fixed << setprecision(2);   // setprecision mengatur dua angka di belakang koma
                                        // fixed digunakan untuk memastikan bahwa angka ditampilkan dalam format desimal tetap.
    cout << "\nTotal Gaji yang diterima adalah " << totalGaji << endl;
    cout << "-------------\n";
    
    return 0;
}
