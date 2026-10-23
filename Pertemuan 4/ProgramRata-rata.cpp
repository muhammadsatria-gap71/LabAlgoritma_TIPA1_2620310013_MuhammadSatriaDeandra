#include<iostream>

using namespace std;

int main (){

    string Nama; // untuk memasukan nama siswa
    float NilaiPertandinganI, NilaiPertandinganII, NilaiPertandinganIII, NilaiRataRata; // untuk memasukan nilai pertandingan dan menghitung rata-rata
    cout << "Masukkan Nama Siswa : "; // untuk memasukan nama siswa
    getline(cin, Nama);
    cout << "Masukkan Nilai Pertandingan I: "; // untuk memasukan nilai pertandingan I
    cin >> NilaiPertandinganI;
    cout << "Masukkan Nilai Pertandingan II: "; // untuk memasukan nilai pertandingan II
    cin >> NilaiPertandinganII;
    cout << "Masukkan Nilai Pertandingan III: "; // untuk memasukan nilai pertandingan III
    cin >> NilaiPertandinganIII;

    NilaiRataRata = (NilaiPertandinganI + NilaiPertandinganII + NilaiPertandinganIII) / 3; // untuk menghitung rata-rata nilai pertandingan

    cout <<"Nama Siswa : " << Nama << " Nilai Rata-rata : " << NilaiRataRata <<endl; // untuk menampilkan nama dan nilai rata-rata yang didapat

    if (NilaiRataRata >= 85) { // jika rata-rata siswa mendapat 85 atau lebih maka dia mendapat komputer core i5
        cout << "Nama Siswa : " <<Nama << " Selamat anda mendapatkan hadiah komputer core i5"<<endl;}
    else if (NilaiRataRata >= 70) { // jika rata-rata siswa mendapat 70 atau lebih maka dia mendapat uang belanja
        cout << "Nama Siswa : " <<Nama << " Selamat anda mendapatkan uang belanja sebesar Rp. 2.500.000"<<endl;}
    else // jika tidak dari kedua diatas maka dia mendapat hiburan
        cout << "Nama Siswa : " <<Nama << " Selamat anda mendapatkan Hiburan "<<endl;
        return 0;
    }