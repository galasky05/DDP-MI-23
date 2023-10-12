#include <iostream>
using namespace std;

int main()
{
    int spr,rvo,bat;
    cin >> spr >> rvo >> bat;
    
    for(int i=spr; i>=rvo; i+=bat) {
        cout << i << " " ;
    }
    return 0;
}