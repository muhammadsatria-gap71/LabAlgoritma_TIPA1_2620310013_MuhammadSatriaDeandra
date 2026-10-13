#include <iostream> //memasukkan library iostream untuk input dan output
#include <string> //memasukkan library string untuk menggunakan tipe data string
using namespace std; //menggunakan namespace std agar tidak perlu menulis std:: sebelum cout, cin, dan endl

int main() {
    // Variabel string untuk menyimpan teks
    string nama = " Muhammad Satria Deandra";
    
    // Variabel int untuk menyimpan bilangan bulat
    int umur = 19;

    // Variabel char untuk menyimpan satu karakter
    char jenisKelamin = 'L';

    // Variabel float untuk menyimpan bilangan desimal
    float tinggi = 177.5;

    // Variabel double untuk menyimpan bilangan desimal dengan ketelitian lebih tinggi
    double berat = 77.77;
    
    // Menampilkan nilai variabel string
    cout << "Nama          : " << nama << endl;

    // Menampilkan nilai variabel char
    cout << "Jenis Kelamin : " << jenisKelamin << endl;

    // Menampilkan nilai variabel int
    cout << "Umur          : " << umur << endl;

    // Menampilkan nilai variabel float
    cout << "Tinggi        : " << tinggi << endl;

    // Menampilkan nilai variabel double
    cout << "Berat         : " << berat << endl;

    return 0;
}