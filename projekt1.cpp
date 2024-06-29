#include <iostream>

using namespace std;


bool czyPierwsza(int x) {
    if (x <= 1) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cin >> wyjscie;
	if (wyjscie == 2) {
            if (czyPierwsza(b)) {
                cout << "Liczba " << b << " jest  pierwsza." << endl;
            } else {
                cout << "Liczba " << b << " nie jest  pierwsza." << endl;
            }
        }

    } while(wyjscie != 0);
    return 0;
}
