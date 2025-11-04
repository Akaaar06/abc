#include <iostream>
#include <string>
using namespace std;
void garis(){
    cout << "=========================" << endl;
}

int main(){
    string name, pajak;
    int gajipokok, harikerja, tunjangan=0, gajitotal, gajibersih;
    //
    cout << "Nama Karyawan      : ";
    cin >> name;
    cout << "Gaji Pokok         : ";
    cin >> gajipokok;
    cout << "Jumlah Hari Kerja  : ";
    cin >> harikerja;

        if(harikerja >= 25){
            tunjangan += 500000;
        }
        else if(harikerja >= 15 || harikerja <= 24){
            tunjangan += 250000;
        }
        else if(harikerja < 15){
            tunjangan += 100000;
        }

    gajitotal = gajipokok + tunjangan;
        if(gajitotal > 5000000){
            pajak = "5%";
            gajibersih = gajitotal - (gajitotal * 5/100);
        }
        else{
            pajak = "0%";
            gajibersih = gajitotal;
        }

    garis();
        cout << "Nama Karyawan : " << name << endl;
        cout << "Gaji Pokok    : " << gajipokok << endl;
        cout << "Hari Kerja    : " << harikerja << endl;
        cout << "Tunjangan     : " << tunjangan << endl;
        cout << "Pajak         : " << pajak << endl;
        cout << "Gaji Bersih   : " << gajibersih << endl;
    garis();

    return 0;
}
