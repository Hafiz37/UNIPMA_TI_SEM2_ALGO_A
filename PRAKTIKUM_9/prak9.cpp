#include <iostream>
#include <cmath> // Untuk fungsi sqrt dan fmod
using namespace std;

// membuat function untuk membuat garis penghias
string garis(string model, int panjang, int jmlhEndl){
    string result;

    for(int i = 0 ; i < panjang ; i++) result += model;
    for(int i = 0 ; i < jmlhEndl ; i++) result += "\n";

    return result;
}

int main(){
    int x, y, jumlah, kurang, kali, modulus;
    double pembagian, akar;

    cout << garis("<>", 16, 1);
    cout << "Melakukan matematik dari 2 angka \n";
    cout << garis("<>", 16, 2);

    cout << garis("~", 30, 1);
    cout << "masukkan bilangan pertama : ";
    cin >> x;
    cout << "masukkan bilangan kedua   : ";
    cin >> y;
    cout << garis("~", 30, 2);


    cout << garis("-", 15, 1);
    jumlah = x + y;
    cout << "jumlah: " << jumlah << endl;

    kurang = x - y;
    cout << "kurang: " << kurang << endl;

    kali = x * y;
    cout << "kali: " << kali << endl;

    // agar tidak ada nilai nol
    if (y != 0) {
        pembagian = static_cast<double>(x) / y;
        cout << "pembagian: " << pembagian << endl;
    } else {
        cout << "pembagian: tidak dapat dibagi dengan nol" << endl;
    }

    akar = x * sqrt(static_cast<double>(y));
    cout << "akar: " << akar << endl;

    modulus = x % y;
    cout << "modulus: " << modulus << endl;

    cout << garis("-", 15, 1);

    return 0;
}


// o	Kesalahan yang Ditemukan :


// 1.	Header File yang Salah
// Kesalahan : #include <iostream.h> tidak valid.
// Pembenaran : Mengganti dengan #include <iostream>.

// 2.	Penggunaan Namespace
// Kesalahan : Tidak ada deklarasi using namespace std; yang menyebabkan cout dan cin tidak dikenali tanpa prefix std::.
// Pembenaran : Menambahkan using namespace std; setelah header #include <iostream>.

// 3.	Tipe Fungsi Main
// Kesalahan : Deklarasi void main() tidak standar.
// Pembenaran : Mengganti dengan int main() dan menambahkan return 0; di akhir fungsi.

// 4.	Kesalahan Penulisan dan Sintaks
// Kesalahan : cint>>x; dan couts adalah penulisan yang salah.
// Pembenaran : Mengganti cint >> x; menjadi cin >> x; dan couts menjadi cout.

// 5.	Pembagian
// Kesalahan : pembagian x/y; tidak memiliki operasi penugasan dan tipe datanya tidak cocok jika x dan y adalah integer untuk mendapatkan hasil floating point.
// Pembenaran : Mengganti dengan pembagian = (float)x / y; untuk memastikan hasil pembagian adalah floating point.

// 6.	Perhitungan Akar
// Kesalahan : akar sqrt (x+y); tidak valid karena tidak ada tipe data dan operasi penugasan.
// Pembenaran : Mengganti dengan akar = x  sqrt(y); dan memastikan #include <cmath> ditambahkan untuk fungsi sqrt.

// 7.	Operator Modulus dan Penggunaan Variabel
// Kesalahan : modulus xу; tidak valid dan moduls tidak dideklarasikan.
// Pembenaran : Untuk modulus integer, menggunakan int modulus = x % y; (jika x dan y adalah integer). Untuk floating point, menggunakan double modulus = fmod(x, y); dengan #include <cmath>.

// 8.	Header untuk Fungsi Matematika
// Kesalahan : #include <math.h> tidak cocok dengan standar C++.
// Pembenaran : Mengganti dengan #include <cmath> untuk standar C++ yang menyediakan sqrt dan fmod.

// 9.	Penggunaan conio.h dan getch()
// Kesalahan : Penggunaan conio.h dan getch() tidak portabel dan biasanya tidak diperlukan.
// Pembenaran : Menghapus #include <conio.h> dan getch(); untuk membuat kode lebih portabel.