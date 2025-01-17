#include <iostream> //untuk fungsi input output 
using namespace std; //untuk mempersingkat source code denagan menghindari penulisan awalan "std::"

int main() {
    int bnykData, jumlah = 0; 
    int pBar = 15;
    float  rataRata = 0; //menggunakan float supaya menampilkan hasil desimal
    int data[bnykData]; // deklerasi array 1 dimensi

    // meminta user untuk memasukkan jumlah data yang akan dimasukkan
    for (int i = 0; i < pBar; i++) cout << "<>"; 
    cout<<endl;

    cout << "Masukkan Banyaknya data = ";
    cin >> bnykData;

    for (int i = 0; i < pBar; i++) cout << "- "; 
    cout<<endl;

    // meminta user untuk memasukkan nilai data sebanyak "bnykData" secara satu persatu
    for (int i = 0; i < bnykData; ++i){
        cout << "Data ke-" << i+1 << "= ";
        cin >> data[i];
    } 

    // menghitung jumlah dari semua data yang sudah di masukkan
    for (int i = 0; i < bnykData; ++i){
        jumlah += data[i]; 
    } 

    // menghitung rata rata dari semua data yang sudah di masukkan
    rataRata = static_cast<float>(jumlah) / bnykData; 
    
    // menampilkan hasil penjumlahan dan rata rata 
    for (int i = 0; i < pBar; i++) cout << "- "; 
    cout<<endl;

    cout << "Jumlah = " << jumlah << endl;
    cout << "Rata-rata = " << rataRata << endl;

    for (int i = 0; i < pBar; i++) cout << "<>"; 
    cout<<endl;
    

    cout << endl;
    return 0; //menunjukkan bahwa program berakhir dengan sukses tanpa kesalahan.
}
