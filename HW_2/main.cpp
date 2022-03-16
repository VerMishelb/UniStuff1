#include <iostream>

#include <string>
#include <ctime>

void sort(int* arr, size_t arr_s, bool(*cmp_func)(int*, int*)) {
	int i = 1;
	int j = 2;

	while (i < arr_s) {
		if (cmp_func(arr + i - 1, arr + i)) {
			i = j;
			j = j + 1;
		}
		else {
			std::swap(arr[i - 1], arr[i]);
			i = i - 1;
			if (i == 0) {
				i = j;
				j = j + 1;
			}
		}
	}
}

bool cmp_greater(int* n1, int* n2) { return *n1 > * n2; }

bool cmp_less(int* n1, int* n2) { return *n1 < *n2; }

void sort_greaterequal(int* arr, size_t arr_s) {
	sort(arr, arr_s, cmp_less);
}

void sort_lessequal(int* arr, size_t arr_s) {
	sort(arr, arr_s, cmp_greater);
}

void reverse(int* arr, size_t arr_s) {
	int* arrc = new int[arr_s];
	if (!arrc) { exit(-1); }
	for (int i = 0; i < arr_s; ++i) {
		arrc[i] = arr[arr_s - i - 1];
	}
	memcpy_s(arr, arr_s, arrc, arr_s);
	delete[] arrc;
}

int arr_sum(int* arr, size_t arr_s) {
	int s = 0;
	for (int i = 0; i < arr_s; ++i) {
		s += arr[i];
	}
	return s;
}

void (*get_fun(int elem, int sum))(int*, size_t) {
	if (sum == elem) {
		return reverse;
	}
	if (sum > elem) {
		return sort_greaterequal;
	}
	if (sum < elem) {
		return sort_lessequal;
	}
}

int program() {
	srand(time(nullptr));

	const int arr_s = 10;
	void (*sort_func)(int*, rsize_t);
	int* arr = new int[arr_s];
	if (!arr) { return -1; }

	for (int i = 0; i < arr_s; ++i) {
		arr[i] = rand() % 21 - 10;
	}
	for (int i = 0; i < arr_s; ++i) {
		std::cout << arr[i] << ' ';
	}
	putchar('\n');

	int s = arr_sum(arr, arr_s);
	std::cout << "Sum of elements: " << s << '\n';
	sort_func = get_fun(arr[0], s);
	sort_func(arr, arr_s);
	for (int i = 0; i < arr_s; ++i) {
		std::cout << arr[i] << ' ';
	}
	putchar('\n');

	delete[] arr;

	return 0;

}

int main() {
	program();
	return 0;
}