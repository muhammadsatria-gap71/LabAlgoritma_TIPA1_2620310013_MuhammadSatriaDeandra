#include <iostream>
using namespace std;

int main() {
    int jumlah = 0, i;
    cout << "Program Untuk menghitung Deret Genap"<< endl;

    for (i = 2; i <= 20; i += 2) {
        cout << i;

        jumlah += i;

        if (i < 20) {
            cout << " + ";
        }
    }

    cout << " = " << jumlah << endl;

    return 0;
}