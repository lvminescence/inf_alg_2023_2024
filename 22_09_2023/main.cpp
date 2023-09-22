#include <iostream>

using namespace std;

int a, b, out;
int main() {
    cout << "Wprowdz zmienna a:\n";
    cin >> a;
    cout << "\nWprowdz zmienna b:\n";
    cin >> b;
    if (a >= b){
        out = a - b;
        cout << "a - b = " << out; 
    } else {
        out = b - a;
        cout << "b - a = " << out; 
    }
    
}
