#include "WindowHeader.h"
#include <sstream>

WindowHeader::WindowHeader(string value) {
	setHeader(value);
}

WindowHeader::WindowHeader(const WindowHeader& wh) {
	string h = wh.getHeader();
	setHeader(h);
}

WindowHeader::~WindowHeader(void) { }

WindowHeader::operator string() const {
	stringstream ss;
	ss << getHeader() << endl;

	return ss.str();
}

ostream& operator << (ostream& out, const WindowHeader& wh) {
	return out << (string)wh;
}

istream& operator >> (istream& in, WindowHeader& wh) {
	string h;
	cout << "Header : "; in >> h;

	wh.setHeader(h);

	return in;
}
