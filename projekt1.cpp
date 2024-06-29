#include <iostream>

using namespace std;


unsigned long long silnia(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	return n*silnia(n-1);
}
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
	cout << "1. Silnia" << endl;
	cout << "2. Czy liczba jest pierwsza";
        cin >> wyjscie;

	if (wyjscie == 1) {
		if (a < 0) {
			cout << "Silnia nie jest zdefiniowana dla liczb ujemnych." << endl;
		} else {
			cout << "Silnia z " << a << " wynosi " << silnia(a) << endl;
		}
	}			
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
