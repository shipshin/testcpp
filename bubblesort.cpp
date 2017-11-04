#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	const int n = 6;
	double arr[n], cell;

	cout << " _______________________\n";
	cout << "( -->  Bubble Sort  <-- )\n";
	cout << " -----------------------\n\n";

	for (int i(0); i < n; i++) {
		cout << "Enter the " << i << " array value: ";
		cin >> arr[i];
	}

	for (int i(0); i < n; i++) {
		for (int k(0); k < (n - 1); k++) {
			if (arr[k] > arr[k + 1]) {
				cell = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = cell;
			}
		}
	}

	cout << "\n";

	for (int i(0); i < n; i++)
		cout << "The " << i << " array = " << arr[i] << endl;

	cout << "\nThank you. To exit, press any button...";

	_getch();
	return 0;
}
