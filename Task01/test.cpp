#include "test.h"

// array without zero elements
void test01() {
	int array[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = 10;
	int expected = 0;
	print(array, size, "test01", expected);
}

// array with only one zero element
void test02() {
	int array[]{ 1, 2, 0, 4, 5 };
	int size = 5;
	int expected = 1;
	print(array, size, "test02", expected);
}

// basic case
void test03() {
	int array[]{ 1, 2, 0, 4, 0, 6, 0, 8, 9, 10 };
	int size = 10;
	int expected = 3;
	print(array, size, "test03", expected);
}

// all elements are zero
void test04() {
	const int size = 5;
	int array[size]{ 0 };
	int expected = 5;
	print(array, size, "test04", expected);
}

// array with only one non-zero element
void test05() {
	int array[]{ 0, 0, 1, 0, 0 };
	int size = 5;
	int expected = 4;
	print(array, size, "test05", expected);
}

// one zero element
void test06() {
	int array[]{ 0 };
	int size = 1;
	int expected = 1;
	print(array, size, "test06", expected);
}

// one non-zero element
void test07() {
	int array[]{ 1 };
	int size = 1;
	int expected = 0;
	print(array, size, "test07", expected);
}

// one zero element
void test08() {
	int array[]{ 0, 1 };
	int size = 2;
	int expected = 1;
	print(array, size, "test08", expected);
}

// wrong size
void test09() {
	int array[]{ 0 };
	int size = 0;
	int expected = -1;
	print(array, size, "test09", expected);
}

// wrong size
void test10() {
	int array[]{ 0 };
	int size = -1;
	int expected = -1;
	print(array, size, "test10", expected);
}