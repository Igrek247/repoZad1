#include <iostream>

using namespace std;


unsigned long long silnia(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	return n*silnia(n-1);
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
        cin >> wyjscie;

    } while(wyjscie != 0);
    return 0;
}
