#include <iostream>
using namespace std;

int main()
{
    int gln,snr,jnr;
    cin >> gln >> snr >> jnr;
    
    for(int i=gln; i<=snr; i+=jnr) {
        cout << i << " " ;
    }
    return 0;
}