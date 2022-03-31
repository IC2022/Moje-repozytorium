#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "Podaj druga liczbe: ";
    cin >> b;

    int pierwszaliczba = a, drugaliczba = b;
    while (a!= b)
    {
        if (b > a)
            b -= a;
        else
            a -= b;
    }
    cout << "NWD =" << a << endl;
    cout << "NWW =" << (pierwszaliczba * drugaliczba) / a;

    return 0;
}