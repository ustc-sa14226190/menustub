
all:
	gcc -c linktable.c -o linktable.o
	gcc -c menu.c -o menu.o
	gcc -c test.c -o test.o
	gcc linktable.o menu.o test.o -o test
clean:
	rm -rf *o
