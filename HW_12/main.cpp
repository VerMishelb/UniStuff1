#include <iostream>
#include <ctime>

#include "Complex.h"

//Вставками
template <typename T>
void sort(T*& arr, size_t arr_size) {
	for (size_t i = 1; i < arr_size; ++i) {
		T key = arr[i];
		size_t test_elem = i - 1;
		while (test_elem >= 0 && arr[test_elem] > key) {
			arr[test_elem + 1] = arr[test_elem];
			--test_elem;
		}
		arr[test_elem + 1] = key;
	}
}

template<typename T>
void printArr(T*& arr, size_t arr_s) {
	for (size_t i = 0; i < arr_s; ++i) {
		std::cout << arr[i] << ((i + 1 < arr_s) ? ' ' : '\n');
	}
}

int main() {
	srand(time(NULL));
	Complex* arr = new Complex[10];
	for (int i = 0; i < 10; ++i) {
		arr[i] = Complex((double)(rand() % 90 + 10), (double)(rand() % 20 + 10) / 4.0);
	}
	printArr(arr, 10);
	for (int i = 0; i < 10; ++i) {
		std::cout << arr[i].Length() << ' ';
	}
	putchar('\n');

	sort(arr, 10);//Сортирует по длине вектора
	putchar('\n');
	printArr(arr, 10);

	for (int i = 0; i < 10; ++i) {
		std::cout << arr[i].Length() << ' ';
	}
	putchar('\n');

	return 0;
}