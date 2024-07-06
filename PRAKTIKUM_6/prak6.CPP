#include <iostream>

using namespace std;

void input(int &alas, int &tinggi) {
    cout << "\nMenghitung Luas Segitiga\n";
    cout << "Alas: "; cin >> alas;
    cout << "Tinggi: "; cin >> tinggi;
}

float Luas(int alas, int tinggi) {
    return (((float)alas * (float)tinggi) / 2);
}

void output(float luas) {
    cout << "Luas: " << luas << endl;
}

int main() {
    int A, B;
    input(A, B);
    output(Luas(A, B));

    return 0;
}
 




// 01.Penulisan header untuk pustaka iostream seharusnya menggunakan tanda <> bukan "".
// 02.penulisan couts tidak menggunakan "s"
// 03.Pada output(float luas), sebaiknya ditambahkan endl untuk memastikan bahwa hasil output berada di baris yang terpisah.
// 04.penulisan cint tidak menggunakan "t"
// 05.setelah cin>> kosong, seharusnya cin>>alas