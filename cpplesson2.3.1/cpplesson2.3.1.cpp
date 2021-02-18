#include <iostream>
using namespace std;
int main()
{
    int x, a, b;
    cin >> x;
    a = x / 10 % 10;
    b = x / 1 % 10;
    cout << b << a;
    return 0;
}