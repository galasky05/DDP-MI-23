#include <iostream>
using namespace std;

int main()
{
    int fry, gla;
    cin >> fry >> gla;
    int matriks[fry][gla];
    
    for (int i = 0; i < fry; i++)
    {
        for (int j = 0; j < gla; j++)
        {
            cin >> matriks[i][j];
        }
    }
    for (int i = fry - 1; i >= 0; i--)
    {
        for (int j = gla - 1; j >= 0; j--)
        {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}