#include <iostream>
using namespace std;
int main(){
    int angka;
    early:
    cout << "Masukkan Angka: " << endl;
    cin >> angka;
    cout << "Angka yang dimasukkan: " << angka << endl;
    goto early;
    return 0;
}
    