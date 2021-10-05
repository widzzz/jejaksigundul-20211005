#include<iostream>
using namespace std;

void jumlah(int, int);

// Fungsi utama
int main(){
//Input user dan deklarasi
    int bar, kol;
    cout << "Masukkan jumlah baris matriks : ";
    cin  >> bar;
    cout << "Masukkan jumlah kolom matriks : ";
    cin  >> kol;
    cout << endl;

// Pemanggil fungsi
    jumlah(bar, kol);
}

// Fungsi jumlah
void jumlah(int b, int k){
// Deklarasi kamus
    int m1[b][k], m2[b][k], s[b][k];

// Input dari user
    cout << "Masukkan elemen matriks pertama : " << endl;
    for (int i = 0; i < b; i++ ) {
        for (int j = 0;j < k;j++ ) {
            cout << "Masukkan nilai a" << i + 1 << j + 1 << ": ";
            cin >> m1[i][j];
        }
    } cout << endl;

    cout << "Masukkan elemen matriks kedua : " << endl;
    for (int i = 0; i < b; i++ ) {
        for (int j = 0;j < k;j++ ) {
            cout << "Masukkan nilai b" << i + 1 << j + 1 << ": ";
            cin >> m2[i][j];
        }
    } cout << endl;

// Hitung penjumlahan matriks dan print hasil
    cout << "Hasil :" << endl;
    for (int i = 0; i < b; i++ ) {
        for (int j = 0; j < k; j++ ) {
            s[i][j] = m1[i][j]+ m2[i][j];
            cout << " " << s[i][j];
            if (j == k - 1) {
                cout << endl;
            }
        }
    }
}
