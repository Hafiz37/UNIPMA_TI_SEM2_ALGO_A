#include <iostream>
#include <string>

using namespace std;

struct TMhs {
    string NIM;
    string Nama;
    int NilaiQuiz;
    int NilaiUTS;
    int NilaiUAS;
    float NilaiAkhir;
    char index;
};

int main() {
    TMhs mhs1, mhs2;
    cout << "----------------------------------" <<endl;
    cout << "\t  PENGISIAN DATA" << endl;
    cout << "----------------------------------" <<endl << endl;
    cout << "NIM\t\t:\t";
    cin >> mhs1.NIM;
    cout << "NAMA\t\t:\t";
    cin.ignore();
    getline(cin, mhs1.Nama);
    cout << "Nilai Quiz\t:\t";
    cin >> mhs1.NilaiQuiz;
    cout << "Nilai UTS\t:\t";
    cin >> mhs1.NilaiUTS;
    cout << "Nilai UAS\t:\t";
    cin >> mhs1.NilaiUAS;
    cout << endl;
    
    mhs1.NilaiAkhir = 0.2 * mhs1.NilaiQuiz + 0.3 * mhs1.NilaiUTS + 0.5 * mhs1.NilaiUAS;
    if (mhs1.NilaiAkhir >= 81) {
        mhs1.index = 'A';
    } else if (mhs1.NilaiAkhir >= 71) {
        mhs1.index = 'B';
    } else if (mhs1.NilaiAkhir >= 57) {
        mhs1.index = 'C';
    } else if (mhs1.NilaiAkhir >= 40) {
        mhs1.index = 'D';
    } else {
        mhs1.index = 'E';
    }

    mhs2 = mhs1;
 
    cout << "Data yang Dimasukkan :" << endl << endl;
    cout << "NIM\t\t:\t" << mhs2.NIM << endl;
    cout << "NAMA\t\t:\t" << mhs2.Nama << endl;
    cout << "Nilai Quiz\t:\t" << mhs2.NilaiQuiz << endl;
    cout << "Nilai UTS\t:\t" << mhs2.NilaiUTS << endl;
    cout << "Nilai UAS\t:\t" << mhs2.NilaiUAS << endl;
    cout << "----------------------------------" << endl;
    cout << "Nilai Akhir\t:\t" << mhs2.NilaiAkhir << endl;
    cout << "Index\t\t:\t" << mhs2.index << endl;
    cout << "----------------------------------" << endl << endl;

    return 0;
}


//	Kesalahan yang Ditemukan :

//  1.	Perpustakaan yang Digunakan:
		// Dari menggunakan stdio.h dan conio.h (C standar) menjadi menggunakan <iostream> dan <string> yang merupakan bagian dari C++ standar. Ini mengindikasikan perubahan dari C ke C++.

//  2.	Pendekatan Input/Output:
		// Mengganti fungsi printf dan gets dengan cout, cin, dan getline. cout dan cin menyediakan cara yang lebih aman dan fleksibel untuk input/output.

// 3.	Struktur Data:
    // Perubahan cara mendeklarasikan string dalam struktur TMhs. Dari array karakter menjadi tipe data string yang merupakan fitur dari C++. Ini memudahkan penanganan string.
    // Penyempurnaan penamaan variabel untuk konsistensi, seperti NilaiuTS menjadi NilaiUTS dan NilaiuAS menjadi NilaiUAS.

// 4.	Fungsi dan Kontrol Aliran Program:
    // Mengubah main() menjadi int main(), yang merupakan cara yang benar dalam C++ untuk menandakan bahwa program selesai dengan mengembalikan nilai.
    // Penambahan return 0; pada akhir main untuk menandakan bahwa program selesai dengan sukses.
    // Perbaikan pada struktur kontrol if-else untuk penentuan index nilai. Diperbaiki salah ketik pada huruf index ‘D’ yang sebelumnya adalah ‘0’.

// 5.	Penggunaan Namespace:
	// Penambahan using namespace std; untuk menghindari penulisan std:: berulang kali saat menggunakan elemen standar library C++ seperti cout dan cin.


// 6.	Penanganan Input:
    // Menggunakan cin.ignore() sebelum getline(cin, mhs1.Nama); untuk mengatasi potensi masalah buffer newline yang tersisa dari input sebelumnya.

// 7.	Format Tampilan:
    // Perubahan pada format tampilan output untuk meningkatkan kejelasan dan estetika, termasuk penambahan garis pembatas dan tabulasi.

// 8.	Penulisan Kode:
    // Penyempurnaan penulisan kode secara keseluruhan untuk meningkatkan kejelasan dan pemeliharaan kode, termasuk penyesuaian tata letak seperti spasi dan baris baru.