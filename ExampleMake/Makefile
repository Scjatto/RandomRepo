CC=g++

CFLAGS=-c -Wall -v

EXT=-std=c++11

HEADER=myfunc.h

PROGS=main.cpp fact.cpp loop.cpp

all: hello

hello: objects
	$(CC) *.o -o setup $(EXT)

objects: $(PROGS) $(HEADER)
	$(CC) $(CFLAGS) $(PROGS) $(EXT)

#main.o: main.cpp myfunc.h
#	$(CC) $(CFLAGS) main.cpp $(EXT)

#fact.o: fact.cpp myfunc.h
#	$(CC) $(CFLAGS) fact.cpp $(EXT)

#loop.o: loop.cpp myfunc.h
#	$(CC) $(CFLAGS) loop.cpp $(EXT)

clean:
	rm -rf *.o setup