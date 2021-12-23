#include "draw.h"

#include <stdio.h>

#include "cursor.h"
#include "../types/bool.h"
#include "../../src/config.h"


char currentState[BOARD_HEIGHT][BOARD_WIDTH] = {};
char changeState[BOARD_HEIGHT][BOARD_WIDTH];


static int sumArray(char array[], int n) {
	
	int sum = 0;
	for (int i = 0; i < n; i++) { sum += array[i]; }

	return sum;

}

static char* genRow(char row[]) {

	char *string = (char[BOARD_WIDTH]) { ' ' };
	string[BOARD_WIDTH] = '\0';
	for (int i = 0; i < BOARD_WIDTH; i++) { if (row[i] == 1) { string[i] = '#'; } else { string[i] = ' '; } }
	return string;

}

void draw_init() {

	printf("%s\n", cursor_savePos());
	for (int i = 0; i < BOARD_HEIGHT; i++) { printf("%s#%*s#\n", cursor_right(2), BOARD_WIDTH, ""); }
	char base[BOARD_WIDTH + 3];
	for (int i = 0; i < (BOARD_WIDTH + 2); i++) { base[i] = '#'; }
	base[BOARD_WIDTH + 2] = '\0';
	printf("%s%s\n\n%s%s%s%s", cursor_right(2), base, cursor_restorePos(), cursor_down(1), cursor_right(3), cursor_savePos());

}

void draw_redraw(char state[BOARD_HEIGHT][BOARD_WIDTH]) {

	for (int i = 0; i < BOARD_HEIGHT; i++) { for (int j = 0; j < BOARD_WIDTH; j++) { changeState[i][j] = currentState[i][j] ^ state[i][j]; } }
	for (int i = 0; i < BOARD_HEIGHT; i++) { if (sumArray(changeState[i], sizeof(changeState[i]) / sizeof(char)) > 0) {
		printf("%s%s\x1B[%iB%s", cursor_restorePos(), cursor_up(1), i + 1, genRow(state[i]));
		printf("%sRedrawn%c", cursor_right(4));
	} }

}

