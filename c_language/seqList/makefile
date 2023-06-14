OBJS = test.o seqList.o
CC = gcc
CFLAGS = -c -Wall -g

test: $(OBJS)
	$(CC) $^ -o $@

%.o: %.c
	$(CC) $^ $(CFLAGS) -o $@

clean:
	$(RM) *.o test -r
