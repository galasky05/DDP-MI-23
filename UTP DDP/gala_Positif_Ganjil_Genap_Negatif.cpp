#include <iostream>
using namespace std;

int main()
{
    int rexa;
    cin >> rexa;
    
    if(rexa < 0){
        cout << "Negatif" << endl;
    } else if (rexa %2 == 0){
        cout << "Positif Genap" << endl;
    } else{
        cout << "Positif Ganjil" << endl;
    }
}