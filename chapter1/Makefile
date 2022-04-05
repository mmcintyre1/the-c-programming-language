CC = clang
CFLAGS = -Weverything

all: hello_world.out

%.out: %.c
	$(CC) -g -o $@ $< $(CFLAGS)

clean:
	rm -f ./wcat
