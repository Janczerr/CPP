#include <iostream>
#include <functional>

using namespace std;

void printTab(int* tab, size_t size, function<bool(int)> f) {
	for (size_t i = 0; i < size; i++) {
		if (f(tab[i]))
			cout << tab[i] << endl;
	}
}


int main()
{
	int tab[] = { 1, 2, 7 };
	function<bool(int)> f = [](int x) -> bool {return x % 7 == 0; };
	printTab(tab, 3, f);

	int userValue;
	cout << "Podaj prog: ";
	cin >> userValue;

	function<bool(int)> g = [userValue](int x) -> bool {return x < userValue; };

	printTab(tab, 3, g);
}
