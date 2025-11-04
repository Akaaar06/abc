//Thirza ALyaa Shoffiyah Salsabila. A
//D121251065

// 5.4_check_pythagoras_trig.cpp
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    cout << "x\tcos^2(x)+sin^2(x)\t1 (theory)\n";
    cout << fixed << setprecision(6);
    for(double x=0.0; x<=2.0; x+=0.2){
        double v = pow(cos(x),2) + pow(sin(x),2);
        cout << x << '\t' << v << '\t' << 1.0 << '\n';
    }
    return 0;
}
