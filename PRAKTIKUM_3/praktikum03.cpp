#include <iostream> //untuk fungsi input output 
using namespace std; //untuk mempersingkat source code denagan menghindari penulisan awalan "std::"

int main() {
    int jmlhData;

    // meminta user untuk memasukkan jumlah data yang ingin di masukkan
    cout << "Masukkan jumlah data yang ingin = ";
    cin >> jmlhData; //memasukkan hasil input ke variabel "jmlhData"

    // deklarasi array 2 dimensi
    string data[jmlhData][3]; //rows sebanyak jmlhData yang user masukkan sebelumnya

    // meminta user untuk memasukkan data
    for (int i = 0; i < jmlhData; i++){
        cout << "Nama Program Studi               : ";
        cin >> data[i][0];
        cout << "Data Semester 1 Jumlah Mahasiswa : ";
        cin >> data[i][1]; 
        cout << "Data Semester 2 Jumlah Mahasiswa : ";
        cin >> data[i][2]; 
    }   // melakukan perulangan sesuai dengan jmlhData yang dimasukkan
        // dimasukkan dalam array data rows sesui indexs dan kolom yang sudah ditentukan

    // Menampilkan data yang telah dimasukkan
    cout << "                                     Data Mahasiswa Fakultas Teknik 2017" << endl;
    cout << "\n+-----+--------------------------------+--------------------------------+--------------------------------+\n";
    cout << "| No. | Nama Program Studi              | Data Semester 1 Jumlah Mahasiswa | Data Semester 2 Jumlah Mahasiswa |\n";
    cout << "+-----+--------------------------------+--------------------------------+--------------------------------+\n";

    for (int i = 0; i < jmlhData; i++) {
        int spasi = 31;

        //menampilkan angka no urut
        cout << "| " << i + 1;
        for (int j = to_string(i + 1).length(); j < 4; j++) cout << " ";
        
        cout << "| " << data[i][0];
        for (int j = data[i][0].length(); j < spasi; j++) cout << " ";

        cout << "| " << data[i][1];
        for (int j = data[i][1].length(); j < spasi; j++) cout << " ";

        cout << "| " << data[i][2];
        for (int j = data[i][2].length(); j < spasi; j++) cout << " ";
        
        cout << "|\n";
    }   // setiap data ditampilkan secara Horizontal
        // to_string digunakan untuk merubah bilangan menjadi string
        // .length() digunakan untuk mendapatkan panjang dari jmlhData
        // looping untuk memberikan spasi horizontal antar data
        // variabel spasi untuk menentukan jarak horizontal antar data

    





    return 0; //menunjukkan bahwa program berakhir dengan sukses tanpa kesalahan.
}
