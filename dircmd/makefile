GCC = gcc -g -c
FIN = gcc -g
ERASE = rm -f *.o *~
OBJECTS= mkdir.o rmdir.o cd.o ls.o pwd.o

file: $(OBJECTS)
	$(FIN) mkdir.o -o mkdir
	$(FIN) rmdir.o -o rmdir
	$(FIN) cd.o -o cd
	$(FIN) ls.o -o ls
	$(FIN) pwd.o -o pwd
	$(ERASE)

mkdir.o: mkdir.c dir.h
	$(GCC) mkdir.c

rmdir.o: rmdir.c dir.h
	$(GCC) rmdir.c

cd.o: cd.c dir.h
	$(GCC) cd.c

ls.o: ls.c dir.h
	$(GCC) ls.c

pwd.o: pwd.c dir.h
	$(GCC) pwd.c
