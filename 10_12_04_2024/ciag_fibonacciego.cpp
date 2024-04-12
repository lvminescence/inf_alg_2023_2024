#include <iostream>

using namespace std;

int fib_rec(int n) {
    if(n==1) {
        return 0;
    } else if(n<3) {
        return 1;
    }
    return fib_rec(n-2)+fib_rec(n-1);
}

int fib_ite(int n) {
    int f0, f1, f;
    f0 = 0;
    f1 = 1;
    for(int i = 0; i < n; i++) {
        if (i>1) {
            f=f0+f1;
            f0=f1;
            f1=f;
        } else {
            f=i;
        }
        cout << f << endl;
    }
    return 0;
}


int main() {
    int wyraz;
    cout << "Podaj nr wyrazu ciagu: ";
    cin >> wyraz;
    cout << fib_rec(wyraz);
    cout << endl << "Ile wyrazow ciagu wypisac: ";
    cin >> wyraz;
    fib_ite(wyraz);

}
