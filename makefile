CC     = gcc
CFLAGS = -O2

test: test.o linked-list-data.o
	$(CC) $(CFLAGS) -o test test.o linked-list-data.o

test.o: test.c
	$(CC) $(CFLAGS) -c -o test.o test.c

linked-list-data.o: linked-list-data.c
	$(CC) $(CFLAGS) -c -o linked-list-data.o linked-list-data.c

clean:
	rm -f *.o
	rm -f test
