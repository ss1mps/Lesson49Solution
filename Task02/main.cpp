#include "logic.h"
#include "util.h"

int main() {
	int array[DEFAULT_SIZE];

	int size;

	do {
		cout << "Input size of array: ";
		cin >> size;
	} while (size <= 0);

	init_random(array, size, 0, 100);

	cout << "Array: " << convert(array, size) << endl;

	int count = count_negative_elements(array, size);

	cout << "Array has " << count << " negative elements.\n";

	return 0;
}