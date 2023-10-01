#include <iostream>
using namespace std;

int main()
{
    int rexa;
    cin >> rexa;
    
    if (rexa >= 0 && rexa <= 9){
        cout << "Satuan" << endl;
    }else if (rexa >= 10 && rexa <= 99){
        cout << "Puluhan" << endl;
    }else if (rexa >= 100 && rexa <= 999){
        cout << "Ratusan" << endl;
    }else{
        cout << "Tidak Tahu" << endl;
    }
}