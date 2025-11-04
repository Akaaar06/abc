#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main(){
    string q1;
    char playagain;
    int q;
    //
    do{
        q = 1 + (rand() % 10);
        cout << q << endl;
            switch(q){
                case 1:
                    cout << "Siapa presiden pertama Indonesia?" << endl;
                    cout << "a. Soekarno\nb. Suharto\nc. Habibie\nd. Jokowi" << endl;
                    cin >> q1;
                        if(q1 == "a" || q1 == "A"){
                            cout << "Jawaban Anda benar!" << endl;
                        }
                        else if(q1 == "b" || q1 == "B" || q1 == "c" || q1 == "C" || q1 == "d" || q1 == "D")
                        {
                            cout << "Jawaban Anda salah!" << endl;
                        }
                        else{
                            cout << "Pilihan tidak valid!" << endl;
                        }
                    break;
                    case 2:
                    cout << "Siapa Presiden Sekarang" << endl;
                    cout << "a. Soeharto\nb. Gibran\nc. Prabowo\nd. Jokowi" << endl;
                    cin >> q1;
                        if(q1 == "c" || q1 == "C"){
                            cout << "Jawaban Anda benar!" << endl;
                        }
                        else if(q1 == "a" || q1 == "A" || q1 == "b" || q1 == "B" || q1 == "d" || q1 == "D")
                        {
                            cout << "Jawaban Anda salah!" << endl;
                        }
                        else{
                            cout << "Pilihan tidak valid!" << endl;
                        }
                    break;
            }
        cout << "Apakah Anda ingin bermain lagi? (y/n): ";
        cin >> playagain;
    }while(playagain == 'y' || playagain == 'Y');

}