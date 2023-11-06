#include <iostream>
using namespace std;

int tab[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

int wyszukiwanie(int szukana) {
    int l = 0;
    int p = 15;
    int sr;
    while (l <= p)
    {
        if (tab[sr] == szukana)
        {
            return sr;
    
        }
        if (tab[sr] > szukana)
        {
            p = sr - 1; 

        } else {
            l = sr + 1;
        }
        sr = (l + p) / 2;
    }
    return -1;    
}

int main()
{
    int szukana, pozycja;
    cout << "Jaka liczbe chcesz znalezc w tablicy? \n";
    cin >> szukana;
    pozycja = wyszukiwanie(szukana);
    if (pozycja == -1)
    {
        cout << "Liczba " << szukana << " nie zostala znaleziona. \n";
    } else 
        cout << "Liczba " << szukana << " znajduje sie w indeksie " << wyszukiwanie(szukana) << endl;
    return 0;
}
