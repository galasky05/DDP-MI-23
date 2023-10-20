#include <iostream>
using namespace std;

int main()
{
    int sans, ikan;
    cin >> sans >> ikan;
    
    for (int i=1; i<=sans; i++)
    {
        for (int j=1; j <= ikan; j++){
            cout << i * j << " ";
        }
        cout << endl;
    }
    return 0;
}