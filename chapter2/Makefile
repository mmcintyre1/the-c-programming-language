CC = clang
CFLAGS = -Weverything

all: 1.out 2.out 3.out 4.out 5.out 6.out

%.out: %.c
	$(CC) -g -o $@ $< $(CFLAGS)

clean:
	rm -f ./*.out
