#include<iostream>
using namespace std;

int main()
{
    int x, pembagi = 0;

    cout << "Masukan angka: ";
    cin >> x;

    for (int i = 1; i <= x; i++) { // untuk variabel i = 1 sampai kurang dari variabel x
        if (x % i == 0) { // x modulus i = 0
            pembagi = pembagi + 1; // proses 
        }
    }

    if (pembagi == 2) {
        cout << "Termasuk bilangan PRIMA" << endl;
    } else {
        cout << "Bukan termasuk bilangan prima" << endl;
    }

    return 0;
}