#include <iostream>
using namespace std;

int main() {
// Deklarasi kamus
    int a[10][10], transpose[10][10], baris, kolom, i, j;

// Input dari user
    cout << "Masukkan jumlah baris matriks : ";
    cin >> baris;
    cout << "Masukkan jumlah kolom matriks : ";
    cin >> kolom;
    cout << endl;

    cout << "Masukkan elemen dari matriks: " << endl;

// Menyimpan elemen dari matriks
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Masukkan elemen a" << i + 1 << j + 1 << ": ";
        cin >> a[i][j];
        }
    }

// Menampilkan matriks yang telah dimasukkan
    cout << "Matriks :" << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << " " << a[i][j];
            if (j == kolom - 1) {
                cout << endl;
            }
        }
    }

// Menghitung hasil transpose
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            transpose[j][i] = a[i][j];
        }
    }

// Menampilkan hasil transpose
    cout << "Hasil transpose dari matriks: " << endl;
    for (int i = 0; i < kolom; i++) {
        for (int j = 0; j < baris; j++) {
            cout << " " << transpose[i][j];
            if (j == baris - 1) {
                cout << endl;
            }
        }
    }
}
