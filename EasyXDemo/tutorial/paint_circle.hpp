#pragma once

#include <graphics.h>
#include <conio.h>

void paint_circle()
{
	initgraph(640, 480);
	circle(200, 200, 100);
	_getch();
	closegraph();
}