#ifndef SCREEN_H
#define SCREEN_H

class Screen {
public:
	~Screen() = default;

	void setSize(float size);
	float getSize();

protected:
	Screen();
	Screen(float size);

	float size{ 0 };
};

#endif
