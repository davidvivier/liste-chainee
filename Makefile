CFLAGS= -Wall -Wextra -g

ListeChaine: main.o liste.o

main.o: liste.h main.c

liste.o: liste.c liste.h

clean:
	rm -rf *.o
	rm -rf listeChaine
