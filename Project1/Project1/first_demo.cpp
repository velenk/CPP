#include <graphics.h>

void firstDemo();

int main() {

	firstDemo();

	return 0;
}

void firstDemo() {
	initgraph(640, 480);

	outtextxy(200, 300, "Aloha world!");
	line(10, 10, 400, 400);

	ege::getch();
	closegraph();

	return;
}