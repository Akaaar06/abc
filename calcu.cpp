#include <iostream>
using namespace std;

int main(){
    int x, y, z;
    char op;
    //
    cout << "Masukkan angka pertama: ";
    cin >> x;
    cout << "Masukkan angka kedua: ";
    cin >> y;
    cout << "Masukkan operator (+, -, X, /): ";
    cin >> op;
    switch(op){
    case '+':
        z = x + y;
        cout << "Hasilnya adalah " << z << endl;
    case '-':
        z = x - y;
        cout << "Hasilnya adalah " << z << endl;
    case '*':
        z = x * y;1
        cout << "Hasilnya adalah " << z << endl;
    case '/':
        cout << "Hasilnya adalah " << x << "/" << y << endl;
    }

    return 0;
}
