
tetris-c: main.o
	gcc main.o -o tetris-c

main.o: src/main.c
	gcc -c src/main.c

clean:
	rm *.o tetris-c

