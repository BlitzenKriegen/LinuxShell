file: mv.o rm.o cat.o cp.o
	gcc -g cat.o -o cat
	gcc -g cp.o -o cp
	gcc -g rm.o -o rm
	gcc -g mv.o -o mv
	rm -f *.o *~

cat.o: cat.c file.h
	gcc -g -c cat.c

cp.o: cp.c file.h
	gcc -g -c cp.c

rm.o: rm.c file.h
	gcc -g -c rm.c

mv.o: mv.c file.h
	gcc -g -c mv.c
