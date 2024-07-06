#include <iostream>
using namespace std;

void Penjumlahan(int data1, int data2)
{
    cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << " Program Penjumlahan, Pengurangan, Perkalian, dan Pembagian " << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~" << endl << endl;
    cout << "Masukkan Data untuk Dijumlahkan :" << endl << endl;
    cout << "Input Data-1  : ";
    cin >> data1;
    cout << "Input Data-2  : ";
    cin >> data2;
    cout << "Jumlah Data-1 + Data-2 = " << data1 << " + " << data2 << " = " << data1 + data2 << endl << endl;
}

void Pengurangan(int pengurangan)
{
    int data1, data2;
    cout << "Masukkan Data untuk Dikurangkan :" << endl;
    cout << "Input Data-1  : ";
    cin >> data1;
    cout << "Input Data-2  : ";
    cin >> data2;
    pengurangan = data1 - data2;
    cout << "Pengurangan Data-1 - Data-2 = " << data1 << " - " << data2 << " = " << pengurangan << endl << endl;
}

void Perkalian()
{
    int data1, data2;
    cout << "Masukkan Data untuk Dikalikan :" << endl;
    cout << "Input Data-1  : ";
    cin >> data1;
    cout << "Input Data-2  : ";
    cin >> data2;
    cout << "Perkalian Data-1 * Data-2 = " << data1 << " * " << data2 << " = " << data1 * data2 << endl << endl;
}

void Pembagian()
{
    int data1, data2;
    cout << "Masukkan Data untuk Dibagi :" << endl;
    cout << "Input Data-1  : ";
    cin >> data1;
    cout << "Input Data-2  : ";
    cin >> data2;
    if (data2 != 0)
    {
        cout << "Pembagian Data-1 / Data-2 = " << data1 << " / " << data2 << " = " << static_cast<double>(data1) / data2 << endl << endl;
    }
    else
    {
        cout << "Pembagian oleh nol tidak diperbolehkan. "<< endl << endl;
    }
}

int main()
{
    int a, b;
    Penjumlahan(a,b);
    Pengurangan(a);
    Perkalian();
    Pembagian();
    return 0;
}