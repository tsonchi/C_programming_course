CC = gcc
CFLAGS = -Wall -Wextra -std=c11

all: safeadd safesubtract safemultiply safedivide

safeint.o: safeint.c safeint.h
	$(CC) $(CFLAGS) -c safeint.c

safeadd: safeadd.c safeint.o
	$(CC) $(CFLAGS) -o safeadd safeadd.c safeint.o

safesubtract: safesubtract.c safeint.o
	$(CC) $(CFLAGS) -o safesubtract safesubtract.c safeint.o

safemultiply: safemultiply.c safeint.o
	$(CC) $(CFLAGS) -o safemultiply safemultiply.c safeint.o

safedivide: safedivide.c safeint.o
	$(CC) $(CFLAGS) -o safedivide safedivide.c safeint.o

clean:
	rm -f *.o safeadd safesubtract safemultiply safedivide
