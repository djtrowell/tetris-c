#ifndef TETROMINO
#define TETROMINO

#include "../types/bool.h"

struct tetromino {
	bool block[32];
	unsigned short rotationPoint;
};

#endif
