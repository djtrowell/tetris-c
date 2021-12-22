#ifndef CURSOR
#define CURSOR

#include <stdio.h>

#define cursor_move(x, y) "\x1B[" #y ";" #x "H"

#define cursor_up(n) "\x1B[" #n "A"
#define cursor_down(n) "\x1B[" #n "B"
#define cursor_right(n) "\x1B[" #n "C"
#define cursor_left(n) "\x1B[" #n "D"

#define cursor_nextLine(n) "\x1B[" #n "E"
#define cursor_prevLine(n) "\x1B[" #n "F"

#define cursor_savePos() "\x1B[s"
#define cursor_restorePos() "\x1B[u"

#endif
