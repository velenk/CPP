#include <graphics.h>

void firstDemo();
void example1();

int main() {

	//firstDemo();
	example1();

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

void example1() {
	initgraph(640, 480);
	
	char s[101];
	inputbox_getline("Input Box", "input a string", s, 100);
	outtextxy(10, 10, s);

	closegraph();
}