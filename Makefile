CFLAGS= -Wall -Wextra -g

main: main.o liste.o

main.o: liste.h main.c

liste.o: liste.c liste.h

clean:
	rm -rf *.o
	rm -rf main
