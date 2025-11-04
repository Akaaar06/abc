#include <iostream>
#include <string>
using namespace std;

void garis(){cout << "========================" << endl;}


int main(){
    string name, namedrink, diskon;
    int drink, x, y, total, pay;
    //
    cout << "==========MENU==========" << endl;
    cout << "(1)Es Teh      | Rp. 5000\n";
    cout << "(2)Kopi        | Rp. 10000\n";
    cout << "(3)Es Jeruk    | Rp. 8000\n";
    garis();
    cout << "Masukkan Nama Pelanggan: " << endl;
    cin >> name;
    cout << "Pilihan Minuman(1-3) " << endl;
    cin >> drink;
    cout << "Jumlah Gelas? " << endl;
    cin >> x;
    garis();
        if(drink == 1){
            y = 5000;
            total = x * y;
            namedrink = "Es Teh";
        }
        else if(drink == 2){
            y = 10000;
            total = x * y;
            namedrink = "Kopi";
        }
        else if(drink == 3){
            y = 8000;
            total = x * y;
            namedrink = "Es Jeruk";
        }
        else{
            cout << "Pilihan Tidak Valid!" << endl;
        }

            if(total > 30000){
                diskon = "5%";
                pay = total - (total * 5 / 100);
            }
            else{
                diskon = "0%";
                pay = total;
            }
    cout << "==========STRUK==========" << endl;
    cout << "Nama Pembeli    : " << name << endl;
    cout << "Jenis Minuman   : " << namedrink << endl;
    cout << "Jumlah          : " << x << endl;
    cout << "Total Harga     : " << total << endl;
    cout << "Diskon          : " << diskon << endl;
    cout << "Total Bayar     : " << pay << endl;
    garis();

    return 0;
}
