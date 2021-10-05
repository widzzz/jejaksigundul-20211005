#include <iostream>
using namespace std;

int main() {
// Deklarasi kamus
    int nilai[10][10], baris, kolom, i, j, jumlah, N;
    float avg;

// Input dari user
    cout << "Masukkan jumlah baris data nilai : ";
    cin >> baris;
    cout << "Masukkan jumlah kolom data nilai : ";
    cin >> kolom;
    cout << endl;

    cout << "Masukkan data nilai: " << endl;

// Menyimpan data nilai
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Masukkan nilai a" << i + 1 << j + 1 << ": ";
            cin >> nilai[i][j];
        }
    }

// Menampilkan nilai yang telah dimasukkan
    cout << endl;
    cout << "Data nilai :" << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << " " << nilai[i][j];
            if (j == kolom - 1) {
                cout << endl;
            }
        }
    }

// Hitung jumlah seluruh elemen
    for(i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
        jumlah = jumlah + nilai[i][j];
        }
    }

// Hitung rata-rata dan print
    N = baris * kolom;
    avg = (float)jumlah / N;
    cout << "Rata-rata : " << avg << endl;

}
