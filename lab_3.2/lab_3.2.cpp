#include "WindowHeader.h"
#include "WindowButton.h"
#include <iostream>

int main()
{
    WindowHeader wh("Header");
    wh.openWindow();

    cout << endl;

    cout << wh;
    cin >> wh;
    cout << wh;

    cout << endl;

    WindowButton wb("Button info");
    wb.openWindow();

    cout << endl;

    cout << wb;
    cin >> wb;
    cout << wb;
}
