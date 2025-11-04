//Thirza Alyaa Shoffiyah Salsabila. A
//D121251065

#include <iostream>
#include <climits>
using namespace std;

unsigned long long fact(unsigned int n){
    unsigned long long res = 1ULL;
    for(unsigned int i=2;i<=n;++i){
        if(res > ULLONG_MAX / i){
            // akan overflow
            return 0; // gunakan 0 sebagai penanda overflow
        }
        res *= i;
    }
    return res;
}

int main(){
    unsigned int n = 1;
    while(true){
        unsigned long long f = fact(n);
        if(f==0){
            cout << "Overflow will occur at n = " << n << " (or larger)\n";
            break;
        }
        // tampilkan beberapa nilai sampai overflow
        if(n <= 20) cout << "fact("<<n<<")="<<f<<'\n';
        ++n;
    }
    return 0;
}
