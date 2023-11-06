#include <iostream>
using namespace std;

unsigned long long silnia(int a) {
    if(a == 1) {
        return a;
    } else {
        return a*silnia(a - 1);
    }
}

int main() {
    int liczba;
    unsigned long long wynik;
    cout << "Kalkulator silni\nPodaj liczbe: ";
    cin >> liczba;
    wynik = silnia(liczba);
    cout << liczba << "! = " << wynik;

}