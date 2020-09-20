#include "Library.h"

int main() {
	Array ar1;
	bool interface {true};
	srand(time(0));
	while (interface) {
		cout << "\tMain Menu\n1 - Create Array,\n2 - Print Array,\n3 - Invert Array,\n4 - End Program\n";
		cout << "User Input: ";
		int ans{};
		cin >> ans;
		switch (ans) {
		case 1: {
			cout << "Enter the array length: ";
			int n{};
			cin >> n;
			cout << "Enter the array values: ";
			int* inputArr = new int[n];
			for (int i = 0; i < n; i++) {
				cin >> inputArr[i];
			}
			ar1.createArray(n, inputArr);
		} break;
		case 2: {
			cout << "Array values: \n";
			ar1.printArray();
			cout << endl;
		} break;
		case 3: {
			ar1.invertArray();
			cout << "Required array numbers, if found, have been successfully inverted.\n";
		} break;
		case 4: interface = false; break;
		default: printf("Wrong input. Please, try again.\n");
		}
	}

	return 0;
}