#include "util.h"

string convert(int array[], int size) {
	string s = "";
	for (int i = 0; i < size; i++)
	{
		s += to_string(array[i]) + " ";
	}
	return s;
}

void print(int array[], int size, string name, int expected) {
	int actual = count_zero_elements(array, size);
	bool result = expected == actual;

	cout << name << " - " << (result ? "completed successfully. Well DONE!!!\033[1;32m [PASS]"
		: "was not running successfully. ERROR!\033[1;31m [FAIL]") << endl;

	cout << "\033[0m";

	if (size > 0) {
		cout << "Array:\t" << convert(array, size) << endl;
	}
	cout << "Count of zero elements is " << actual << endl;
	cout << "----------------------------------------------------" << endl;
}
