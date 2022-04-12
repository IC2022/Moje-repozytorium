#include<iostream>
#define STOP '\n'
using namespace std;
int main() {

    int a = 0;
    int b = 0;
    int znacznik = 0;
    char c;
    char tab[19];
    char tab2[19];
    char litery[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int l_znak = 0;
    cout << "Podaj wyraz skladajacy sie z malych liter:" << '\n';
    while ((c = getchar()) != STOP) {
        tab[l_znak] = c;
        l_znak++;
    }

    if (l_znak <= 20) {
        for (int i = 0; i != l_znak; i++) {
            for (int x = 0; x != 23; x++) {
                if (tab[i] == litery[x]) {
                    b = x;
                    a = x;
                    a = a + 3;
                    tab2[i] = litery[a];

                }
                if (tab[i] == ' ') {
                    tab2[i] = ' ';
                }


            }

            for (int x = 23; x!= 26; x++) {
                a = 0;
                if (tab[i] == litery[x]) {
                    a = x - 23;
                    tab2[i] = litery[a];
                }
            }

        }
        cout << "Po zaszyfrowaniu:";
        for (int i = 0; i != l_znak; i++) {
            cout << tab2[i];
        }
        cout << '\n';
        system("Pause");
    }


}