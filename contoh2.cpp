#include <iostream>
using namespace std;

int main(){
    int nilai[3][4] = {
                        {90,85,75,72},
                        {70,76,82,90},
                        {80,82,87,83}
                      };

    cout << "Menampilkan array baris ke-0 dan kolom ke-0  : ";
    cout << nilai[0][0] << endl;
    cout << "Menampilkan array baris ke-1 dan kolom ke-3  : ";
    cout << nilai[1][3] << endl;
    cout << "Menampilkan array baris ke-2 dan kolom ke-3  : ";
    cout << nilai[2][3] << endl;
}
