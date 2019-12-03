#include <cmath>
#include <iostream>

using namespace std;

int main() {
    size_t size;
    int temp, iloczyn = 1, suma = 0;

    cout << "Podaj rozmiar tablicy: " << endl;

    cin >> size;
    int tab[size];

    for(int i = 0; i < size; i++){

        cout << "Podaj liczbe: " << endl;

        cin >> temp;
        tab[i] = temp;

        suma += tab[i];
        iloczyn *= tab[i];
    }

    for(int i = 0; i < size; i++){

        cout << tab[i] << " ";

    }

    int srednia = suma/size;

    cout << " Suma: " << suma << " Iloczyn: " << iloczyn << " Srednia arytmetyczna: " << srednia << endl;

}
