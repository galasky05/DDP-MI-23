#include <iostream>
using namespace std;

int main()
{
    for (int i; i < 10; i++) {
        for (int j; i < i; j++) {
        cout << "* ";
    }
    cout << endl;
    }
    return 0;
}