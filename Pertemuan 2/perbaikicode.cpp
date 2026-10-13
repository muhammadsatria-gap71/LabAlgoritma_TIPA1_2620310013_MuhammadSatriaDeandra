#include<iostream>

using namespace std;

int main()
{
    int jumlah;
    float total, harga;
    harga = 4500.02;
    cout << "Masukkan jumlah barang yang dibeli ="<<endl;
    cin >> jumlah ;
    total = jumlah * harga;
    cout << "Total harga yang harus dibayar "<<total;
    return 0;
}