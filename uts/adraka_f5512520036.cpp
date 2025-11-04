// Adraka Tristan Wistara
// F5512520036

#include <iostream>
#include <string>
using namespace std;

int main(){
    // variabel
    string nama, status, statushadiah;
    int nuts, nuas, ratarata, hadiah;

    // input data
    cout << "Masukkan Nama Mahasiswa: " << endl;
    cin >> nama;
    cout << "Masukkan Nilai UTS(0-100): " << endl;
    cin >> nuts;
    cout << "Masukkan Nilai UAS(0-100): " << endl;
    cin >> nuas;
    cout << "Masukkan Kode Hadiah(1=Pulpen, 2=Buku Catatan, 3=Penghapus): " << endl;
    cin >> hadiah;

    // proses data
    ratarata = (nuts + nuas) / 2;
        if(ratarata >= 75){
            status = "Lulus";
        }
        else if(ratarata < 75){
            status = "Tidak Lulus";
        }
    switch(hadiah){
        case 1:
            statushadiah = "Pulpen";
            break;
        case 2:
            statushadiah = "Buku Catatan";
            break;
        case 3:
            statushadiah = "Penghapus";
            break;
        default:
            cout << "Pilihan Tidak Ada!(1-3)" << endl;
    }

    // output akhir
    cout << "----------------------------------" << endl;
    cout << "Nama Mahasiswa: " << nama << endl;
    cout << "Nilai Rata-Rata: " << ratarata << endl;
    cout << "Status: " << status << endl;
    cout << "Hadiah: " << statushadiah << endl;
    cout << "----------------------------------" << endl;
    return 0;
}
