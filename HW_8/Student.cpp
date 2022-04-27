#include "Student.h"

#ifdef _WIN32
std::string Wide2UTF(const std::wstring& wstr, unsigned int codepage) {
	if (wstr.empty()) { return std::string(); }
	int size_needed = WideCharToMultiByte(codepage, 0, &wstr[0], (int)wstr.size(), NULL, 0, NULL, NULL);
	std::string strTo(size_needed, 0);
	WideCharToMultiByte(codepage, 0, &wstr[0], (int)wstr.size(), &strTo[0], size_needed, NULL, NULL);
	return strTo;
}
std::wstring UTF2Wide(const std::string& str, unsigned int codepage) {
	if (str.empty()) { return std::wstring(); }
	int size_needed = MultiByteToWideChar(codepage, 0, &str[0], (int)str.size(), NULL, 0);
	std::wstring wstrTo(size_needed, 0);
	MultiByteToWideChar(codepage, 0, &str[0], (int)str.size(), &wstrTo[0], size_needed);
	return wstrTo;
}
#endif

Student::Student(
	std::string surname,
	std::string name,
	std::string patronymic,
	int			age,
	int			year,
	std::string group
) : surname(	surname), 
	name(		name), 
	patronymic(	patronymic), 
	age(		age), 
	year(		year), 
	group(		group)
{
	if (year > 5 || year < 1) {
		this->group = "ВЫПУСК";
		this->year = 0;
	}
}

void Student::fixWindowsCodepage() {
#ifdef _WIN32
	this->group = Wide2UTF(UTF2Wide(this->group, CP_OEMCP));
	this->surname = Wide2UTF(UTF2Wide(this->surname, CP_OEMCP));
	this->name = Wide2UTF(UTF2Wide(this->name, CP_OEMCP));
	this->patronymic = Wide2UTF(UTF2Wide(this->patronymic, CP_OEMCP));
#else
void Student::fixWindowsCodepage() {
	return;
}
#endif
}

std::ostream& operator<<(std::ostream& out, const Student& student) {
	out <<
		((student.surname == "")	? "-\t" : student.surname) <<
		((student.name == "")		? "\t-\t" : '\t' + student.name) <<
		((student.patronymic == "")	? "\t-\t" : '\t' + student.patronymic) <<
		'\t' << student.age <<
		'\t' << student.year <<
		
		"\t\t" << student.group;
	return out;
}

std::istream& operator>>(std::istream& in, Student& student) {
	in >>
		student.surname >>
		student.name >>
		student.patronymic >>
		student.age >>
		student.year >>
		student.group;
	return in;
}
