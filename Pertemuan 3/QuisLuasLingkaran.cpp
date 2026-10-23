#include <iostream>

using namespace std;

int main() {
    float r, luaslingkaran, PHI = 3.14; // tipe data float untuk menyimpan nilai jari-jari, luas lingkaran, dan PHI

    cout << "Masukkan jari-jari Lingkaran : ";
    cin >> r;

    luaslingkaran = PHI * r * r;

    cout << "Luas Lingkaran adalah : " << luaslingkaran << endl;
    return 0;  
}
