
tetris-c: main.o tetromino.o
	gcc main.o tetromino.o -o tetris-c

main.o: src/main.c
	gcc -c src/main.c

tetromino.o: lib/tetris/tetromino.c
	gcc -c lib/tetris/tetromino.c

clean:
	rm *.o tetris-c

