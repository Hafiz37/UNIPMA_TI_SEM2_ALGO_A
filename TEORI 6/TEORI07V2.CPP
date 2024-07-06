#include <iostream>
using namespace std;

void penukaran(int x, int y)
{
    int z = x;
    x = y;
    y = z;
    
    cout<<x<<"  "<<y;
}

int main()
{
    int x, y;
    cout<<"masukkan nilai x : ";cin>>x;
    cout<<"masukkan nilai y : ";cin>>y;

    cout<<endl<<endl;
    cout<<"x "<<" y"<<endl;
    cout<<x<<"  "<<y<<endl;
    cout<<"---------"<<endl;
    cout<<"x "<<" y"<<endl;
    penukaran(x,y);
}