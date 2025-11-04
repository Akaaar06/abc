#include <iostream>
#include <string>
using namespace std;

int main()
{
    float tot = 0; // total harga pesanan
    int jmlh = 0; // jumlah pesanan
    float kase, kemb;
    char pesan, jawab, lagi;
    string dftrpsnn;

    //
    do
    {
        cout << "\n==== MENU YANG TERSEDIA ====\n";
        cout << "Makanan:\n";
        cout << "1. Nasi Kuning       Rp.10000\n";
        cout << "2. Nasi Goreng       Rp.15000\n";
        cout << "3. Ayam Geprek       Rp.12000\n";
        cout << "4. Gado-Gado         Rp.10000\n";
        cout << "---------------------------\n";
        cout << "Minuman:\n";
        cout << "5. Es Teh            Rp.5000\n";
        cout << "6. Es Jeruk          Rp.5000\n";
        cout << "7. Es Campur         Rp.5000\n";
        cout << "8. Lemon Tea         Rp.6000\n";
        cout << "==============================\n";
        cout << "Pesan apa bang? (ketik angka): ";
        cin >> pesan;
            switch(pesan)
            {
                case '1':
                    cout << "Kamu mau beli Nasi Kuning?\nRp.10000 (y/n): ";
                    cin >> jawab;
                        if (jawab == 'y' || jawab == 'Y') {
                            tot += 10000;
                            jmlh++;
                            dftrpsnn += to_string(jmlh) + ". " + "Nasi Kuning\n";
                            cout << "Kamu beli Nasi Kuning.\n";
                        }
                        else{cout << "Baiklah.\n";}
                        break;
                case '2':
                    cout << "Kamu mau beli Nasi Goreng?\nRp.15000 (y/n): ";
                    cin >> jawab;
                        if (jawab == 'y' || jawab == 'Y') {
                            tot += 15000;
                            jmlh++;
                            dftrpsnn += to_string(jmlh) + ". " + "Nasi Goreng\n";
                            cout << "Kamu beli Nasi Goreng.\n";
                        }
                        else{cout << "Baiklah.\n";}
                        break;
                case '3':
                    cout << "Kamu mau beli Ayam Geprek?\nRp.12000 (y/n): ";
                    cin >> jawab;
                        if (jawab == 'y' || jawab == 'Y') {
                            tot += 12000;
                            jmlh++;
                            dftrpsnn += to_string(jmlh) + ". " + "Ayam Geprek\n";
                            cout << "Kamu beli Ayam Geprek.\n";
                        }
                        else{cout << "Baiklah.\n";}
                        break;
                case '4':
                    cout << "Kamu mau beli Gado-Gado?\nRp.10000 (y/n): ";
                    cin >> jawab;
                        if (jawab == 'y' || jawab == 'Y') {
                            tot += 10000;
                            jmlh++;
                            dftrpsnn += to_string(jmlh) + ". " + "Gado-Gado\n";
                            cout << "Kamu beli Gado-Gado.\n";
                        }
                        else{cout << "Baiklah.\n";}
                        break;
                case '5':
                    cout << "Kamu mau beli Es Teh?\nRp.5000 (y/n): ";
                    cin >> jawab;
                        if (jawab == 'y' || jawab == 'Y') {
                            tot += 5000;
                            jmlh++;
                            dftrpsnn += to_string(jmlh) + ". " + "Es Teh\n";
                            cout << "Kamu beli Es Teh.\n";
                        }
                        else{cout << "Baiklah.\n";}
                        break;
                case '6':
                    cout << "Kamu mau beli Es Jeruk?\nRp.5000 (y/n): ";
                    cin >> jawab;
                        if (jawab == 'y' || jawab == 'Y') {
                            tot += 5000;
                            jmlh++;
                            dftrpsnn += to_string(jmlh) + ". " + "Es Jeruk\n";
                            cout << "Kamu beli Es Jeruk.\n";
                        }
                        else{cout << "Baiklah.\n";}
                        break;
                case '7':
                    cout << "Kamu mau beli Es Campur?\nRp.5000 (y/n): ";
                    cin >> jawab;
                        if (jawab == 'y' || jawab == 'Y') {
                            tot += 5000;
                            jmlh++;
                            dftrpsnn += to_string(jmlh) + ". " + "Es Campur\n";
                            cout << "Kamu beli Es Campur.\n";
                        }
                        else{cout << "Baiklah.\n";}
                        break;
                case '8':
                    cout << "Kamu mau beli Lemon Tea?\nRp.6000 (y/n): ";
                    cin >> jawab;
                        if (jawab == 'y' || jawab == 'Y') {
                            tot += 6000;
                            jmlh++;
                            dftrpsnn += to_string(jmlh) + ". " + "Lemon Tea\n";
                            cout << "Kamu beli Lemon Tea\n";
                        }
                        else{cout << "Baiklah.\n";}
                        break;
                default:
                    cout << "Menu tidak tersedia.\n";
            }

        cout << "Ada lagi? (y/n): ";
        cin >> lagi;

    }while (lagi == 'y' || lagi == 'Y');
        cout << "==========Pesanan==========\n" << dftrpsnn << endl;
        cout << "---------------------------------\n";
        cout << "Total: Rp." << tot << endl;
            cout << "Uang yang diberikan: Rp.";
                cin >> kase;
                kemb = kase - tot;
                    if (kemb < 0){cout << "Uang kamu kurang Rp." << abs(kemb) << endl;}
                    else{cout << "Kembalian: Rp." << kemb << endl;}
        cout << "================================\n" << endl;
    return 0;
}