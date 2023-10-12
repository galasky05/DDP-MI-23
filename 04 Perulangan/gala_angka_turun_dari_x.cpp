#include <iostream>
using namespace std;

int main()
{
    int alif, bata;
    cin >> alif >> bata;
    
    for(int i=alif; i>=bata; i--){
        cout << i << " " << endl;
    }
    return 0;
}