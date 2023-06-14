OBJS = test.o dlinkList.o
CC = gcc
CFLAGS = -c -Wall -g

test: $(OBJS)
	$(CC) $^ -o $@

%.o: %.c
	$(CC) $^ $(CFLAGS) -o $@

.PHONY: clean
clean:
	$(RM) *.o test -r
