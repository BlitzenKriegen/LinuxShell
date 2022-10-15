file: mkdir.o rmdir.o
	gcc -g mkdir.o -o mkdir
	gcc -g rmdir.o -o rmdir
	rm -f *.o *~

mkdir.o: mkdir.c dir.h
	gcc -g -c mkdir.c

rmdir.o: rmdir.c dir.h
	gcc -g -c rmdir.c
