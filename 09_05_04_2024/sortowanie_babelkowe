#include <iostream>
using namespace std;

int tablica[10] = {21, 57, 54, 92, 89, 24, 99, 19, 20, 63};
int n;

int sort_bbl() {
    int temp; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i; j++) {
            if (tablica[j-1] > tablica[j]) {
                temp = tablica[j-1];
                tablica[j-1] = tablica[j];
                tablica[j] = temp;
            }
        }
    }
    return 0;
}

int main() {
    cout << "Wprowadz liczbe elementow do posortowania: ";
    cin >> n;
    cout << "Tablica przed sortowaniem:\n";
    for (int a = 0; a < n; a++) {
        cout << tablica[a] << " | ";
    }
    sort_bbl();
    cout << "\nTablica po sortowaniu:\n";
    for (int a = 0; a < n; a++) {
        cout << tablica[a] << " | ";
    }
}
