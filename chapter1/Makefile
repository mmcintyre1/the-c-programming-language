CC = clang
CFLAGS = -Weverything

all: hello_world.out temperature.out 6.out 7.out 8.out 9.out 10.out 12.out 13.out 14.out 15.out

%.out: %.c
	$(CC) -g -o $@ $< $(CFLAGS)

clean:
	rm -f ./wcat
