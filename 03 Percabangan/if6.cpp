#include <iostream>
using namespace std;

int main()
{
    int acer;
    cin >> acer;
    
    if(acer<0){
        cout << "Negatif" << endl;
    }else if(acer%2==0){
        cout << "Positif Genap" << endl;
    }else{
        cout << "Positif Ganjil" << endl;
    }
}