//Thirza Alyaa Shoffiyah Salsabila. A
//D121251065

#include <iostream>
using namespace std;

int main(){
    int a, sum = 0;
    cout << "masukkan nilai a: ";
    cin >> a;

    for (int i = 1; i <= a; i++)
        sum += i * i;

    cout << "jumlah kuadrat = " << sum << endl;
    return 0;
}