#include <iostream>
using namespace std;

int main()
{
    int dara, ratu;
    cin >> dara >> ratu;
    int matriks[dara][ratu];
    
    for (int i = 0; i < dara; i++)
    {
        for (int j = 0; j < ratu; j++)
        {
            cin >> matriks[i][j];
        }
    }
    for (int i = dara - 1; i >= 0; i--)
    {
        for (int j = ratu - 1; j >= 0; j--)
        {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}