#include <iostream>
#include <vector>

#include "Student.h"

bool gExit = false;
std::vector<Student> entries{};

void printEntries(std::vector<Student>& entries) {
	std::cout << "№\tФамилия\tИмя\tОтчество\tВозраст\tГод обучения\tГруппа\n";
	size_t s = entries.size();
	for (int i = 0; i < s; ++i) {
		std::cout << i << ".\t" << entries[i] << '\n';
	}
}

void getCommand() {
	std::string input;
	std::cout << "\n\nВведите команду: ";
	/* std::ws решает проблему неучтённого \n при вводе чисел ("add") */
	std::getline(std::cin >> std::ws, input);
	if (input == "help") {
		std::cout <<
			"help — показать этот экран.\n"
			"add — добавить запись в картотеку.\n"
			"remove — удалить запись из картотеки.\n"
			"show — вывести картотеку.\n"
			"exit — выйти из программы.\n"
			;
		return;
	}
	if (input == "add") {
		std::cout << "Введите данные в следующем формате\nФамилия Имя Отчество Возраст Год_обучения Группа\n>";
		Student tmpStudent{};
		std::cin >> tmpStudent;
		tmpStudent.fixWindowsCodepage();
		entries.push_back(tmpStudent);
		return;
	}
	if (input == "remove") {
		std::cout << "Индекс записи для удаления: ";
		size_t idx = entries.size() - 1;
		std::cin >> idx;
		if (idx < 0 || idx >= entries.size()) {
			std::cout << "Запись не существует.\n";
			return;
		}
		entries.erase(entries.begin() + idx);
		return;
	}
	if (input == "show") {
		printEntries(entries);
		return;
	}
	if (input == "exit") {
		gExit = true;
		return;
	}
}

int main() {
	std::setlocale(LC_ALL, ".UTF8");
	entries.reserve(3);
	entries.emplace_back(Student("Иванов", "Иван", "Иванович", 21, 3, "ККТО-01-19"));
	entries.emplace_back(Student("Петров", "Пётр", "Петрович", 18, 1, "ККТО-01-21"));
	entries.emplace_back(Student("Ыунов", "Ыун", "", 45, -156, "ККТО-01-19"));
	printEntries(entries);

	while (!gExit) {
		getCommand();
	}

	return 0;
}