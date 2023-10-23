#include <iostream>
using namespace std;

int rozklad_na_czynniki(int n) {
    int k = 2;
    while(n > 1) {
        while(n % k == 0) {
            cout << k << ", ";
            n = n / k;
        }
        k = k + 1;
    }
}

int main() {
    int liczba;
    cout << "Rozklad na czynniki pierwsze.\nWprowadz liczbe: ";
    cin >> liczba;
    cout << "Czynniki pierwsze: " << rozklad_na_czynniki(liczba);
}