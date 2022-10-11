OBJ = dir.o

shell: $(OBJ)
	gcc -g $(OBJ) -o sh
	rm *.o *~

dir.o: dir.c dir.h
	gcc -g -c dir.c
