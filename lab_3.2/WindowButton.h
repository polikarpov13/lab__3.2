#include "Window.h"
#include <iostream>
#include <string>

using namespace std;

class WindowButton :
	public Window
{
private:
	string buttonInfo;
public:
	WindowButton(string value);
	WindowButton(const WindowButton&);
	~WindowButton(void);

	void setButtonInfo(const string bi) { buttonInfo = bi; }
	string getButtonInfo() const { return buttonInfo; }

	operator string() const;

	friend ostream& operator << (ostream& out, const WindowButton& wh);
	friend istream& operator >> (istream& in, WindowButton& wh);
};

