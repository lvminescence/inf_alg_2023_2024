#include <iostream>
using namespace std;

int sqrExpo(int a, int n) {
    int w = 1;
    while(n > 0) {
        if(n % 2 == 1) {
            w = w * a;
        }
        a = a * a;
        n = n / 2;
    }
    return w;
}

int main() {
    int podstawa, wykladnik, potega;
    cout << "Szybkie potegowanie - 09.10.2023 \n";
    cout << "Podaj podstawe: \n";
    cin >> podstawa;
    cout << "Podaj wykladnik: \n";
    cin >> wykladnik;
    potega = sqrExpo(podstawa, wykladnik);
    cout << potega;
}