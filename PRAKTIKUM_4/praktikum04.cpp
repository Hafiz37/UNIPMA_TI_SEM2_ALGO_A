#include <iostream> //untuk fungsi input output 
using namespace std; //untuk mempersingkat source code denagan menghindari penulisan awalan "std::"

int main() {
    int rows, cols;

    // Meminta pengguna memasukkan ukuran matriks
    cout << "Masukkan jumlah baris matriks: ";
    cin >> rows;
    cout << "Masukkan jumlah kolom matriks: ";
    cin >> cols;

    // Mendefinisikan dua matriks dengan array 2 dimensi
    int A[rows][cols], B[rows][cols], result[rows][cols]; //result untuk menyimapan hasil penjumlahan matrix A&B

    // Meminta pengguna memasukkan elemen-elemen matriks A
    cout << "Masukkan elemen-elemen matriks A:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j]; // memasukkan inputan ke variabel A
        } // melakukan perulangan untuk memasukkan angka satu per satu
    } 

    // Meminta pengguna memasukkan elemen-elemen matriks B
    cout << "Masukkan elemen-elemen matriks B:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> B[i][j]; // memasukkan inputan ke variabel B
        } // melakukan perulangan untuk memasukkan angka satu per satu
    } 

    // Melakukan penjumlahan matriks A dan B
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = A[i][j] + B[i][j];
        } // mengisi variabel result dengan hasil penjumlahan A dan B sesuai dengan I dan J
    }

    // Menampilkan matriks A, matriks B, dan hasil penjumlahan secara berdampingan
    cout << "Matriks A               Matriks B               Hasil Penjumlahan" << endl;
    for (int i = 0; i < rows; ++i) {
        // Menampilkan matriks A
        for (int j = 0; j < cols; ++j) {
            cout << A[i][j] << " ";
        }

        // Spasi untuk memisahkan matriks A dan B
        cout << "     +     ";

        // Menampilkan matriks B
        for (int j = 0; j < cols; ++j) {
            cout << B[i][j] << " ";
        }

        // Spasi untuk memisahkan matriks B dan hasil penjumlahan
        cout << "     =     ";

        // Menampilkan hasil penjumlahan matriks
        for (int j = 0; j < cols; ++j) {
            cout << result[i][j] << " ";
        }

        // Pindah ke baris baru setelah setiap baris matriks
        cout << endl;
    } 

    return 0; //menunjukkan bahwa program berakhir dengan sukses tanpa kesalahan.
}
