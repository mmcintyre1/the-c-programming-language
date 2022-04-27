CC = clang
CFLAGS = -Weverything

all: 1.out 2.out 3.out

%.out: %.c
	$(CC) -g -o $@ $< $(CFLAGS)

clean:
	rm -f ./*.out
