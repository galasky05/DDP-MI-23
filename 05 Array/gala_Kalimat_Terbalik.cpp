#include <iostream>
using namespace std;

int main()
{
    string pls;
    getline (cin, pls);
    
for (int i = pls.size() -1; i >= 0; i--) {
        cout << pls[i];
    }
    return 0;    
}