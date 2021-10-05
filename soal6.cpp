#include<iostream>
#include<iomanip>
using namespace std;

int main() {
// Deklarasi kamus
    string nama[5];
    int nilai[5][3], i, j;
    double jumlah[5], avg[5];

// Input dari user
    for (int i = 0; i < 5; i++) {
        cout << "Masukkan nama mahasiswa            " << i + 1 << " : ";
        cin >> nama[i];
    }

    j = 0;
    for (int i = 0; i < 5; i++) {
        cout << "Masukkan nilai UTS mahasiswa       " << i + 1 << " : ";
        cin >> nilai[i][j];
    }

    j = 1;
    for (int i = 0; i < 5; i++) {
        cout << "Masukkan nilai UAS mahasiswa       " << i + 1 << " : ";
        cin >> nilai[i][j];
    }

    j = 2;
    for (int i = 0; i < 5; i++) {
        cout << "Masukkan nilai responsi mahasiswa  " << i + 1 << " : ";
        cin >> nilai[i][j];
    }

// Hitung nilai total dari mahasiswa
    for (i = 0; i < 5; i++) {
        for(j = 0; j < 3; j++) {
            jumlah[i] += nilai[i][j];
        }
    }

// Hitung rata-rata
    for (i = 0; i < 5; i++) {
            avg[i] = jumlah[i] / 3;
    }

// Menampilkan nama dan rata-rata nilai
    cout << endl;
    cout << "Rata-rata nilai mahasiswa:" << endl;
    for (int i = 0; i < 5; i++) {
        for (i = 0; i < 5; i++) {
            cout << nama[i] << " : "<< setprecision(4) << avg[i] << endl;
        }
    }

}
