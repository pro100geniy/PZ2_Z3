#pragma once
#include <iostream>
#include<string>
#include<windows.h>
struct Color {
	int R;
	int G;
	int B;
};

class Line {
private:
    COORD cord_S;
    COORD cord_E;
	Color color;
	unsigned int thickness;
	int line;
public:
	Line(COORD cord_S, COORD cord_E, Color color, unsigned int thickness, int line):cord_S(cord_S), cord_E(cord_E), color(color), thickness(thickness), line(line) {}

	void paint();
};

void Line::paint() {

    HWND hWindow = GetConsoleWindow();
    HDC hDeviceContext = GetDC(hWindow);
    HPEN hPen = CreatePen(line, thickness, (RGB(color.R, color.G, color.B)));
    SelectObject(hDeviceContext, hPen);
    MoveToEx(hDeviceContext, cord_S.X, cord_S.Y, NULL);
    LineTo(hDeviceContext, cord_E.X, cord_E.Y);
    DeleteObject(hPen);
    ReleaseDC(hWindow, hDeviceContext);
};
