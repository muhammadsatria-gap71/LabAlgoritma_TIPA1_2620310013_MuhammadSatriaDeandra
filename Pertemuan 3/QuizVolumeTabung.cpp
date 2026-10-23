#include <iostream>

using namespace std;

int main() {
    float VolumeTabung, r, t, PHI = 3.14; // tipe data float untuk menghitung volume tabung

    cout << "Masukkan jari-jari Tabung : "; // untuk meminta input jari-jari tabung dari user
    cin >> r; // masukkan nilai jari-jari tabung ke variabel r

    cout << "Masukkan tinggi Tabung : "; //untuk meminta input tinggi tabung dari user
    cin >> t; // masukkan nilai tinggi tabung ke variabel t

    VolumeTabung = PHI * r * r * t; // rumus untuk menghitung volume tabung yaitu V = PHI * r * r * t
    cout << "Volume Tabung adalah : " << VolumeTabung << endl; // untuk menampilkan hasil volume tabung 

    return 0;
}