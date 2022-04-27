#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

/*
Посвящается консоли Windows, которая не умеет читать UTF-8 без использования wchar_t.
Взято из собственного старого проекта с той же проблемой
(IAMI https://forum.chickeninvaders.com/t/mod-installer-and-public-mods/11469?u=vermishelb).
*/
#ifdef _WIN32
#include <Windows.h>
std::string Wide2UTF(const std::wstring& wstr, unsigned int codepage = CP_UTF8);
std::wstring UTF2Wide(const std::string& str, unsigned int codepage = CP_UTF8);
#endif

class Student {
public:
	Student() = default;
	Student(
		std::string surname,
		std::string name,
		std::string patronymic,
		int age = 18,
		int year = 1,
		std::string group = "-"
	);
	Student(const Student& other) = default;
	~Student() = default;

	void fixWindowsCodepage();

	friend std::ostream& operator<<(std::ostream& out, const Student& student);
	friend std::istream& operator>>(std::istream& in, Student& student);
	Student& operator=(const Student& other) = default;

private:
	std::string group{ "" };
	std::string name{ "" };
	std::string surname{ "" };
	std::string patronymic{ "" };
	int age{ 0 };
	int year{ 0 };
};

#endif