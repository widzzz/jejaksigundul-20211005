#include<iostream>
using namespace std;

int main() {
// Deklarasi kamus
    int tinggi[5];
    int i = 0, N = 5;

// Input data ke array
    cout << "Masukkan 5 data tinggi badan : " << endl;
    while(i < 5) {
        cin >> tinggi[i];
        i++;
    }

// Print elemen array
    cout << "Tampilan seluruh data :" << endl;
    for (i = 0; i < N; i++) {
        cout << "Array index ke-" << i << " :" << tinggi[i] << endl;
    }
}
