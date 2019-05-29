all: tp
tp: array.o sort.o main.o
	cl -o tp array.obj sort.obj main.obj
array.o: array.c array.h
	cl -o array.obj -c array.c
sort.o: sort.c sort.h array.h
	cl -o sort.obj -c sort.c
main.o: main.c sort.h
	cl -o main.obj -c main.c

clean:
	rm -rf *.o
