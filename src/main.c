#include <stdio.h>

#include "config.h"
#include "../lib/draw/cursor.h"
#include "../lib/draw/draw.h"


int main(int argc, char *argv[]) {

	draw_init();
		
	printf("%s\x1B[%dE", cursor_restorePos(), BOARD_HEIGHT + 2);
	return 0;
	
}

