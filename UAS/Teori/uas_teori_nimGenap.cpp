#include <iostream>
#include <cmath>
using namespace std;

// procedure untuk menghitung luas persegi panjang
void hitungLuasPP(double panjang, double lebar, double &luas){
    luas = panjang * lebar;
}

// procedure untuk menghitung luas segitiga
void hitungLuasST(double alas, double tinggi, double &luas){
    luas = (alas * tinggi) / 2;
}

// procedure untuk menghitung luas lingkaran
void hitungLuasLK(double jariJari, double &luas){
    double pi = 3.14;
    luas = pi * (jariJari * jariJari);
}

// procedure untuk membuat garis penghias
void garis(string model, int panjang, int jmlhEndl){
    string result;

    for(int i = 0 ; i < panjang ; i++) result += model;
    for(int i = 0 ; i < jmlhEndl ; i++) result += "\n";

    cout << result;
}


int main() {
    int pilihNo;
    double panjang, lebar, alas, tinggi, jariJari;
    double luasPP, luasST, luasLK;
    char pilihan;

    do{
        garis("<>", 20, 1);
        cout << "     PROGRAM MENGHITUNG LUAS BANGUN\n";
        garis("<>", 20, 2);

        garis("~", 22, 1);
        cout << "  MENU PILIHAN PROSES\n";
        garis("~", 22, 1);
        cout << "1.Luas Persegi Panjang\n";
        cout << "2.Luas Segi Tiga\n";
        cout << "3.Luas Lingkaran\n";
        cout << "4.SELESAI / KELUAR\n";
        garis("~", 22, 2);

        garis("=", 34, 1);
        cout << "Pilih Nomor yang anda inginkan : ";
        cin >> pilihNo;
        garis("=", 34, 2);

        if(pilihNo == 1){
            garis("<>", 20, 1);
            cout << " Anda Memilih No.1 Luas Persegi Panjang \n";
            garis("<>", 20, 1);

            garis("~", 42, 1);
            cout << "Masukkan panjang dari persegi panjang : ";
            cin >> panjang;
            cout << "Masukkan lebar dari persegi panjang : ";
            cin >> lebar;
            garis("~", 42, 2);

            hitungLuasPP(panjang, lebar, luasPP);
            garis("-", 35, 1);
            cout << "Panjang yang anda masukkan = " << panjang << " cm" <<endl;
            cout << "Lebar yang anda masukkan = " << lebar << " cm" <<endl;
            garis("-", 35, 1);

            garis("=", 29, 1);
            cout << "Luas persegi panjang = " << luasPP << " cm" <<endl;
            garis("=", 29, 3);

        } else if(pilihNo == 2){
            garis("<>", 20, 1);
            cout << "Anda Memilih No.2 Luas Segi Tiga \n";
            garis("<>", 20, 1);
            
            garis("~", 42, 1);
            cout << "Masukkan alas dari segi tiga : ";
            cin >> alas;
            cout << "Masukkan tinggi dari segi tiga : ";
            cin >> tinggi;
            garis("~", 42, 2);

            hitungLuasST(alas, tinggi, luasST);

            garis("-", 35, 1);
            cout << "Alas yang anda masukkan = " << alas << " cm" <<endl;
            cout << "Tinggi yang anda masukkan = " << tinggi << " cm" <<endl;
            garis("-", 35, 1);

            garis("=", 29, 1);
            cout << "Luas segi tiga = " << luasST << " cm" <<endl;
            garis("=", 29, 3);
        } else if(pilihNo == 3){
            garis("<>", 20, 1);
            cout << "Anda Memilih No.3 Luas Lingkaran \n";
            garis("<>", 20, 1);
            
            garis("~", 42, 1);
            cout << "Masukkan jari-jari dari lingkaran : ";
            cin >> jariJari;
            garis("~", 42, 2);

            hitungLuasLK(jariJari, luasLK);

            garis("-", 35, 1);
            cout << "Jari-jari yang anda masukkan = " << jariJari << " cm" <<endl;
            garis("-", 35, 1);

            garis("=", 29, 1);
            cout << "Luas lingkaran = " << luasLK << " cm" <<endl;
            garis("=", 29, 3);
        }else if(pilihNo == 4){
            garis("<>", 27, 1);
            cout << " Terimakasih Sudah Menggunakan, sampai jumpa kembali.\n";
            garis("<>", 27, 2);
            
        } else if(pilihNo != 4){
            garis("! !", 24, 1);
            cout << "         PILIHAN ANDA TIDAK VALID, SILAHKAN COBA LAGI!!!\n";
            garis("! !", 24, 2);
        }
    } while (pilihNo != 4);
    


}
