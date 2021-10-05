#include <iostream>
using namespace std;

int main() {
// Deklarasi kamus
    int nilai[10][10], baris, kolom, i, j;

// Input dari user
    cout << "Masukkan jumlah baris data nilai (max 10): ";
    cin >> baris;
    cout << "Masukkan jumlah kolom data nilai (max 10): ";
    cin >> kolom;
    cout << endl;

    cout << "Masukkan data nilai: " << endl;

// Menyimpan data nilai
    for (i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Masukkan nilai a" << i + 1 << j + 1 << ": ";
        cin >> nilai[i][j];
        }
    }

// Menampilkan nilai yang telah dimasukkan
    cout << endl;
    cout << "Data nilai :" << endl;
    for (i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << " " << nilai[i][j];
            if (j == kolom - 1) {
                cout << endl;
            }
        }
    }

}
