sh: dir.o shell.o file.o
	gcc -g dir.o -o dir
	gcc -g shell.o -o sh
	gcc -g file.o -o fl
	rm *.o *~

shell.o: shell.c shell.h
	gcc -g -c shell.c

dir.o: dir.c dir.h
	gcc -g -c dir.c

file.o: file.c file.h
	gcc -g -c file.c
