#include <iostream>
#include <string>
using namespace std;

int main(){
  int gajipkk, tunjangan= 0, gajibersih, totgaji;
  int hkerja;
  string nama, pajak;
  //
  cout << "Nama Karyawan: ";
  cin >> nama;
  cout << "Gaji Pokok: ";
  cin >> gajipkk;
  cout << "Jumlah Hari Kerja: ";
  cin >> hkerja;
  
  if(hkerja >= 25){
    tunjangan += 500000;
  }
  else if(hkerja >= 15 && hkerja <= 24){
    tunjangan += 250000;
  }
  else if(hkerja <= 14){
    tunjangan += 100000;
  }
  else{
    cout << "Invalid!";
  }
  
  totgaji = gajipkk + tunjangan;
  if(totgaji > 5000000){
    gajibersih = gajipkk - (gajipkk * 5 / 100);
    pajak = "5%";
  }
  else{
    pajak = "0%";
  }
  
  cout << "========Informasi========\n";
  cout << "Nama Karyawan: " << nama << endl;
  cout << "Gaji Pokok: " << gajipkk << endl;
  cout << "Jumlah Hari Kerja: " << hkerja << endl;
  cout << "Tunjangan: " << tunjangan << endl;
  cout << "Pajak: " << pajak << endl;
  cout << "Gaji Bersih: " << gajibersih << endl;
  cout << "=========================\n";
  return 0;
}