#include<iostream>
using namespace std;

int main() {
// Deklarasi kamus
    int tinggi[5];
    int i = 0, N = 5, jumlah = 0;
    float avg;

// Input data ke array
    cout << "Masukkan 5 data tinggi badan : " << endl;
    while(i < 5) {
        cin >> tinggi[i];
        i++;
    }

// Print elemen array
    cout << "Tampilan seluruh data :" << endl;
    for (i = 0; i < N; i++) {
        cout << tinggi[i] << endl;
    }

// Hitung jumlah seluruh array
    for(i = 0; i < N; i++) {
        jumlah += tinggi[i];
    }

// Menampilkan rata-rata
    avg = (float)jumlah / N;
    cout << "Rata-rata : " << avg;
}
