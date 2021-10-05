#include <iostream>
using namespace std;

int main(){
// Deklarasi kamus
    string kata;
    int n, i;
    bool palindrome = true;

// Input user
    cout << "Program untuk mengecek kata/kalimat palindrom atau bukan" << endl;
    cout << "Input Kata : ";
    getline(cin, kata);
    n = kata.length();

// Menentukan palindrom atau tidak
    for(i = 0; i < n; i++){
        if(kata[i] != kata[n-i-1]){
            palindrome = false;
            break;
        }
    }

// Print hasil
    if(palindrome == true) {
        cout << "Valid Palindrom";
    } else {
        cout << "Bukan Palindrom";
    }
}
