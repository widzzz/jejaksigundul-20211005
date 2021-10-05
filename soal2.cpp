#include<iostream>
using namespace std;

int main() {
// Deklarasi kamus
    int array[10];
    int i, max, min, N;
    int ganjil = 0, genap = 0;
    N = 10;

// Input user
    cout << "Masukkan " << N << " bilangan bulat: " << endl;
    for(i = 0; i<N; i++) {
        cin >> array [i];
    }

// Menentukan min max
    max = array[0];
    min = array[0];

    for (i = 0; i < N; i++) {
        if(array[i] > max)
            max = array[i];
        if(array[i] < min)
            min = array[i];
    }

// Print min max
    cout << "Bilangan terbesar      : " << max << endl;
    cout << "Bilangan terkecil      : " << min << endl;

// Menentukan ganjil genap
    for(i=0; i<N; i++)
    {
        if(array[i]%2 == 0) {
            genap++;
        }
        else {
            ganjil++;
        }
    }

// Print jumlah bilangan ganjil dan genap
    cout << "Jumlah bilangan ganjil : " << ganjil << endl;
    cout << "Jumlah bilangan genap  : " << genap << endl;
}
