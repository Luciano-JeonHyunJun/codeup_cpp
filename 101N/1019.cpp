#include <iostream>
using namespace std;

int main()
{
    int y , m , d;
    char x;
    cin >> y >> x >>  m >> d >> x;

    cout.width(4);
    cout.fill('20');
    cout << y << x;

    cout.width(2);
    cout.fill('0');
    cout << m << x;

    cout.width(2);
    cout.fill('0');
    cout << d;

    return 0;
}

