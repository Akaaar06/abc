#include <iostream>
#include <string>
using namespace std;

void bline(){
    cout << "=====================================" << endl;
}

void line(){
    cout << "-------------------------------------" << endl;
}

void confirm(){
    cout << "Apakah kamu memesan ";
}
int main()
{
    char pesan;
    //
    do{
        bline();
        cout << "Nama Barang:\n";
        cout << "1. Buku\n2. Pensil\n3. Polpen\n4. Penghapus\n5. Penggaris" << endl;
        bline();

        cout << "Beli apa?(masukkan angka)"
        cin >> pesan;

        switch(pesan)
        {
            case '1':
               cout << confirm() << "Buku?" << endl;
               while(true)
               {
                   if(respon == 'y')
                    (-
               }

        }



    }

    return 0;
}
