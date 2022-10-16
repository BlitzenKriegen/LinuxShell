GCC = gcc -g -c
FIN = gcc -g
ERASE = rm -f *.o *~

file: mv.o rm.o cat.o cp.o
	$(FIN) cat.o -o cat
	$(FIN) cp.o -o cp
	$(FIN) rm.o -o rm
	$(FIN) mv.o -o mv
	$(ERASE)

cat.o: cat.c file.h
	$(GCC) cat.c

cp.o: cp.c file.h
	$(GCC) cp.c

rm.o: rm.c file.h
	$(GCC) rm.c

mv.o: mv.c file.h
	$(GCC) mv.c
