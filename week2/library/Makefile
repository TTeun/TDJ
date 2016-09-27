CC = g++-6
CFLAGS = -O3 -Wall -std=c++17
DEPS = max.cc max3.cc min.cc min3.cc average.cc 

all:  calcutils.o calcutils.a test.cc

clean:
	rm a.out *.o

calcutils.o: $(DEPS) calcutils.h
	$(CC) $(CFLAGS) -c $(DEPS)

calcutils.a: max.o max3.o min.o min3.o average.o
	ar -cvq lib/calcutils.a *.o

test.cc: lib/calcutils.a
	$(CC) test.cc lib/calcutils.a