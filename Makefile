
tetris-c: main.o draw.o tetromino.o
	gcc main.o draw.o tetromino.o -o tetris-c


main.o: src/main.c
	gcc -c src/main.c


draw.o: lib/draw/draw.c
	gcc -c lib/draw/draw.c

tetromino.o: lib/tetris/tetromino.c
	gcc -c lib/tetris/tetromino.c


clean:
	rm *.o tetris-c

