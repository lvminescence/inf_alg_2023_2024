
#include <iostream>

using namespace std;

double f(double x) {
    return x*x+x+2;
}

double calknum(double a, double b, double n) {
    double x = (b-a)/n;
    double s = 0;
    double srodek = a+(b-a) / (2.0*n);
    for (int i = 0; i < n; i++) {
        s = s + f(srodek);
        srodek = srodek + x;
    }
    return s*x;
}

int main() {
    double liczbaa, liczbab, liczbac;
    cout << "Podaj przedzial [a, b]\na = ";
    cin >> liczbaa;
    cout << "b = ";
    cin >> liczbab;
    cout << "Podaj liczbe trapezow: ";
    cin >> liczbac;
    cout << "Pole figury wynosi:";
    cout << calknum(liczbaa, liczbab, liczbac);

}
