#include "Window.h"
#include <iostream>
#include <string>

using namespace std;

class WindowHeader:
	public Window
{
private:
	string header;
public:
	WindowHeader(string value);
	WindowHeader(const WindowHeader&);
	~WindowHeader(void);

	void setHeader(const string h) { header = h; }
	string getHeader() const { return header; }

	operator string() const;

	friend ostream& operator << (ostream& out, const WindowHeader& wh);
	friend istream& operator >> (istream& in, WindowHeader& wh);
};

