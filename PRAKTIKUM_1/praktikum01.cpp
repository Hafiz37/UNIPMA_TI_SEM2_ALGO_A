#include <iostream> //untuk fungsi input output 
using namespace std; //untuk mempersingkat source code denagan menghindari penulisan awalan "std::"

int main() {
    int size = 7; //untuk menentukan panjang / banyaknya abjad
    int pBar = 16;
    char abjad[size]; //deklarasi array 1 dimensi 
    
    // meminta user untuk memasukkan abjad sebanyak "size"
    for (int i = 0; i < pBar; i++) cout << "<>"; 
    cout<<endl;
    
    cout << "Masukkan " << size << " abjad satu per satu:" << endl;
    for (int i = 0; i < size; ++i) { 
        cout<<"masukkan abjad ke-"<<i<<"= ";
        cin >> abjad[i];
    } // perulangan untuk user memasukkan abjad satu per satu, abjad akan dimasukkan kedalam variabel abjad

    for (int i = 0; i < pBar; i++) cout << "<>"; 
    cout<<endl<<endl;

    // mencetak abjad dalam urutan terbalik dan setiap abjad dipisahkan dengan ","
    for (int i = 0; i < pBar; i++) cout << "<>"; 
    cout<<endl;
    cout << "Huruf dalam urutan terbalik: ";
    for (int i = size - 1; i >= 0; --i) {
        cout << abjad[i];
        if (i > 0) {
            cout << ",";
        } // perkondisian supaya abjad terakhir tidak diberi tanda koma
    } //perulangan untuk menampilkan hasil reverse abjad yang sudah di input 
    cout << endl;
    for (int i = 0; i < pBar; i++) cout << "<>"; 
    cout<<endl;

    return 0; //menunjukkan bahwa program berakhir dengan sukses tanpa kesalahan.
}
