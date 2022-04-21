#include "WindowButton.h"
#include <sstream>

WindowButton::WindowButton(string value) {
	setButtonInfo(value);
}

WindowButton::WindowButton(const WindowButton& wh) {
	string h = wh.getButtonInfo();
	setButtonInfo(h);
}

WindowButton::~WindowButton(void) { }

WindowButton::operator string() const {
	stringstream ss;
	ss << getButtonInfo() << endl;

	return ss.str();
}

ostream& operator << (ostream& out, const WindowButton& wb) {
	return out << (string)wb;
}

istream& operator >> (istream& in, WindowButton& wb) {
	string h;
	cout << "ButtonInfo : "; in >> h;

	wb.setButtonInfo(h);

	return in;
}
