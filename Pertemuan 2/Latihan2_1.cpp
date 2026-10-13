#include<iostream> //memasukkan library iostream untuk input dan output
using namespace std; //menggunakan namespace std agar tidak perlu menulis std:: sebelum cout dan endl
int main() //fungsi utama program
{
    string nama, npm; // membuat variabel untuk menyimpan nama dan npm
    cout << "Masukkan NPM : ";  //menampilkan teks "Masukkan NPM : "
    cin >> npm; //membaca input dari pengguna dan menyimpannya ke variabel npm
    cin.ignore(); //mengabaikan karakter newline yang tersisa di buffer input setelah membaca npm
    cout << "Masukkan Nama : "; //menampilkan teks "Masukkan Nama : "
    getline(cin, nama); //membaca input dari pengguna dan menyimpannya ke variabel nama, termasuk spasi
    cout << "NPM: " << npm << endl; //menampilkan teks "NPM: " 
    cout << "Nama: " << nama << endl; //menampilkan teks "Nama: " 
    return 0; //tanda program selesai
}