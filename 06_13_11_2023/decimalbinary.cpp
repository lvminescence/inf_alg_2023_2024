#include <iostream>
#include <string>

using namespace std;

int DecimalToBinary(int liczba) {
    int tab[15], i;
    string wynik;
    while(liczba != 0) {
        tab[i++] = liczba % 2;
        liczba /= 2;
    }
    for (int j = i-1; j >= 0; j--)
    {
        wynik += to_string(tab[j]);
    }
    return stoi(wynik);
    
}

int main(){
    int dzsc;
	cout << "Wprowadz liczbe dziesietna: ";
    cin >> dzsc;
    cout << DecimalToBinary(dzsc);
}