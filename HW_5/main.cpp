#include <iostream>
#include <ctime>

#define RAND_RANGE(from, to) (rand() % (to + 1 - from) + from)

void fillMatrixRand(int*** arr, int h, int w) {
	srand(time(nullptr));
	for (int h_ = 0; h_ < h; ++h_) {
		for (int w_ = 0; w_ < w; ++w_) {
			(*arr)[h_][w_] = RAND_RANGE(10, 50);
		}
	}
}

void printMatrix(int**& arr, int h, int w) {
	for (int h_ = 0; h_ < h; ++h_) {
		for (int w_ = 0; w_ < w; ++w_) {
			std::cout << arr[h_][w_] << ((w_ + 1 < w) ? ' ' : '\n');
		}
	}
}

int main() {
	std::setlocale(LC_ALL, ".UTF8");

	int** arr = nullptr;

	std::cout << "Введите размеры двумерного массива (H W): ";
	int arrW = 0, arrH = 0;
	std::cin >> arrH >> arrW;

	arr = new int* [arrH];
	if (!arr) { std::cerr << "Не удалось выделить память.\n"; exit(-1); }
	for (int i = 0; i < arrH; ++i) {
		arr[i] = new int[arrW];
	}

	fillMatrixRand(&arr, arrH, arrW);
	printMatrix(arr, arrH, arrW);

	for (int i = 0; i < arrH; ++i) {
		delete[] arr[i];
	}
	delete[] arr;
}
