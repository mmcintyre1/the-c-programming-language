CC = clang
CFLAGS = -Weverything

all: hello_world.out temperature.out 6.out 7.out 8.out 9.out 10.out 12.out 13.out 14.out 15.out 16.out 17.out 18.out 19.out detab.out entab.out fold.out remove_comments.out

%.out: %.c
	$(CC) -g -o $@ $< $(CFLAGS)

clean:
	rm -f ./*.out
