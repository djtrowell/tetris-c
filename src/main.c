#include <stdio.h>

#include "../lib/draw/cursor.h"
#include "../lib/draw/draw.h"

const int WIDTH = 10;
const int HEIGHT = 20;

int main(int argc, char *argv[]) {

	draw_init(WIDTH, HEIGHT);

	printf("%s\x1B[%dE", cursor_restorePos(), HEIGHT + 2);
	return 0;
	
}

