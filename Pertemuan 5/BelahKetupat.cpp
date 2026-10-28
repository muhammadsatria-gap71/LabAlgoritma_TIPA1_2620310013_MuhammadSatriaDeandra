#include <iostream>

using namespace std;

int main() {
    int a, i, j, k, m;

    cout << "Input lebar Belah Ketupat: "; 
    cin >> a;
    cout << endl;

    // untuk bagian atas belah ketupat 
    for (int i = 1; i <= a; i++) { // untuk menambahkan variabel i dari 1 sampai kurang dari sama dengan a
        for (j = 1; j <= a - i; j++) { // untuk menambahkan variabel j sampai kurang dari sama dengan a - i
            cout << " ";
        }

        for (int k = 1; k <= 2 * i - 1; k++) { // untuk menambahkan variabel k sampai kurang dari sama dengan 2*i
            cout << "*";
        }
        cout << endl;
    }

    // untuk bagian bawah belah ketupat
    for (int i = a - 1; i >= 1; i--) { // untuk pengurangan dari jumlah a - 1 sampai i lebih dari sama dengan 1
        for (j = 1; j <= a - i; j++) { // untuk variabel j sampai kurang dari sama dengan a - i
            cout << " ";
        }

        for (int k = 1; k <= 2 * i - 1; k++) { // untuk variabel k dari 1 sampai 2 * i - 1 
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}