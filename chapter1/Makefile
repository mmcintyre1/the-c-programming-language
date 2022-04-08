CC = clang
CFLAGS = -Weverything

all: hello_world.out temperature.out 6.out 7.out 8.out

%.out: %.c
	$(CC) -g -o $@ $< $(CFLAGS)

clean:
	rm -f ./wcat
