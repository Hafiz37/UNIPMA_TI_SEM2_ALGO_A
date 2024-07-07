#include <iostream>

using namespace std;

int pBar = 13;
void input(int &alas, int &tinggi) {

    for (int i = 0; i < pBar; i++) cout << "<>"; 
    cout << "\nMenghitung Luas Segitiga\n";
    for (int i = 0; i < pBar; i++) cout << "<>"; 
    cout<<endl;
    
    cout << "Alas: "; cin >> alas;
    cout << "Tinggi: "; cin >> tinggi;

    for (int i = 0; i < pBar; i++) cout << "--"; 
    cout<<endl;
}

float Luas(int alas, int tinggi) {
    return (((float)alas * (float)tinggi) / 2);
}

void output(float luas) {
    cout << "Luas: " << luas << endl;

    for (int i = 0; i < pBar; i++) cout << "--"; 
    cout<<endl;
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