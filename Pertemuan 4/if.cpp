#include<iostream> 

using namespace std;

int main (){ 

    double tot_beli, potongan=0, jum_bayar=0; //deklarasi variabel dengan tipe data double
    cout << "Total Pembelian Rp."; //menampilkan teks "Total Pembelian Rp." ke layar
    cin >> tot_beli; //meminta input dari user dan menyimpannya ke dalam variabel tot_beli
    
    if(tot_beli >=5000) //kondisi if untuk memeriksa apakah total pembelian lebih besar atau sama dengan 5000
    {
        potongan = 0.2*tot_beli; //jika kondisi terpenuhi, maka potongan dihitung sebagai 20% dari total pembelian
        cout << "Besarnya potongan : Rp." << potongan << endl; //menampilkan besarnya potongan ke layar
        jum_bayar = tot_beli - potongan; //menghitung jumlah yang harus dibayarkan dengan mengurangi total pembelian dengan potongan
        cout << "Jumlah yang harus dibayarkan : Rp." << jum_bayar << endl; //menampilkan jumlah yang harus dibayarkan ke layar
        return 0; //mengembalikan nilai 0 untuk menandakan program telah selesai dengan sukses
    }
}