#include <iostream>

using namespace std;

int main() {

    // inisialisasi variabel

    int x = 50; // nilai x itu 50
    int a, b, c, d, e; // variabel a, b, c, d, e pake tipe data integer

    //proses 

    a = x > 5 + 5; // jika benar maka a = 1, jika salah maka a = 0
    b = x > 100; // jika benar maka b = 1, jika salah maka b = 0
    c = a && b; // jika benar maka c = 1, jika salah maka c = 0
    d = a || b; // jika benar maka d = 1, jika salah maka d = 0
    e = !(c); // jika benar maka e = 1, jika salah maka e = 0

    // output berupa 1 (benar) atau 0 (salah)
    cout <<"\nNilai a = x > 5 + 5 = : " << a << endl;
    cout <<"\nNilai b = x > 100 = : " << b << endl;
    cout <<"\nNilai c = a && b = : " << c << endl;
    cout <<"\nNilai d = a || b = : " << d << endl;
    cout <<"\nNilai e = !(c) = : " << e << endl;

    getchar();

}