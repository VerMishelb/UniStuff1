#ifndef KEYBOARD_H
#define KEYBOARD_H

class Keyboard {
public:
	~Keyboard() = default;

	void setLayout(const char* layout);
	char* getLayout();
	void setLang(const char* lang);
	char* getLang();

protected:
	Keyboard();
	Keyboard(const char* lang);
	Keyboard(const char* lang, const char* layout);

	char lang[4] = { 0 };
	char layout[8] = { 0 };
};

#endif // !KEYBOARD_H
