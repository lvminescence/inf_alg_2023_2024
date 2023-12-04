#include <iostream>

using namespace std;


float nty_wyraz(int n) {
    if(n == 1) {
        return 1;
    } else if (n == 2) {
        return 0.5;
    }
    return -nty_wyraz(n-1) * nty_wyraz(n-2);
}

int main() {
    int wyraz;
    float wynik;
    cout << "Podaj nr wyrazu ciagu, ktorego wartosc chcesz policzyc: ";
    cin >> wyraz;
    wynik = nty_wyraz(wyraz);
    cout << wyraz << " wyraz ciagu ma wartosc " << wynik;

}
