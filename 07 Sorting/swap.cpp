#include <iostream>
using namespace std;

int main(){
    
    int a = 10;
    int b = 5;

    int temp = a; // temp = 10, a = 10
    a = b; // b = 5, a = 5
    b = temp; // temp = 10, b = 10
    
    cout << a << endl; // 5
    cout << b << endl; // 10
}