#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "Masukkan usia anda: ";
    cin >> x;

    if(x < 18){
        cout << "Anda berusia " << x << " Tahun\n";
        cout << "Anda <18 tahun";
    }

    else if(x > 18){
        cout << "Anda berusia " << x << " Tahun\n";
        cout << "Anda >18 tahun";
    }
    else if(x = 18){
        cout << "Anda berusia " << x << " Tahun\n";
        cout << "Anda =18 tahun";
    }
    else{
        cout << "Masukkan data umur yang baik!";
    system("pause");
    }
}
