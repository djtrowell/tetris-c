#include "draw.h"

#include <stdio.h>
#include <stdlib.h>

#include "cursor.h"


void draw_init(int width, int height) {

	printf("%s\n", cursor_savePos());
	for (int i = 0; i < height; i++) { printf("%s#%*s#\n", cursor_right(2), width, ""); }
	char base[width + 3];
	for (int i = 0; i < (width + 2); i++) { base[i] = '#'; }
	base[width + 2] = '\0';
	printf("%s%s\n\n%s%s%s%s", cursor_right(2), base, cursor_restorePos(), cursor_down(1), cursor_right(3), cursor_savePos());

}
