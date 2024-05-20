#include <iostream>

using namespace std;

int reszta(int kwota) {
    int nominaly[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int ile;
    int i = 0;
    while(kwota > 0) {
        if(kwota >= nominaly[i]) {
            ile = kwota / nominaly[i];
            kwota = kwota - (nominaly[i]*ile);
            cout << nominaly[i] << " x " << ile << endl;
        }
        i = i + 1;
    }
    return 0;
}

int main() {
    int pieniadze;
    cin >> pieniadze;
    reszta(pieniadze);
}
