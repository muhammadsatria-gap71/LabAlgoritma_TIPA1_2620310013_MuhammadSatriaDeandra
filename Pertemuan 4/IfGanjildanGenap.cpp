#include <iostream> 
using namespace std;

int main () {
    int bil;
    cout << "Masukkan Bilangan : "; //menampilkan teks "Masukkan
    cin >> bil; //meminta input dari user dan menyimpannya ke dalam variabel bil
    cout << endl; //menampilkan baris kosong ke layar

    if (bil % 2 == 0) //kondisi if untuk memeriksa apakah bilangan yang dimasukkan adalah genap
    {
        cout << bil << " adalah bilangan genap" << endl; //menampilkan bahwa bilangan tersebut adalah genap
    }
    else //jika kondisi if tidak terpenuhi, maka akan masuk ke blok else
    {
        cout << bil << " adalah bilangan ganjil" << endl; //menampilkan bahwa bilangan tersebut adalah ganjil
    }
}