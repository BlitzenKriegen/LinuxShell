sh: exec.o shell.o
	gcc -g shell.o -o sh
	gcc -g exec.o -o exec
	rm -f *.o *~

shell.o: shell.c shell.h
	gcc -g -c shell.c

exec.o: exec.c exec.h
	gcc -g -c exec.c
