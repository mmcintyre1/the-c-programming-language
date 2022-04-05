CC = clang
CFLAGS = -Weverything

wcat: wcat.c
	$(CC) -g -o $@ $< $(CFLAGS)

clean:
	rm -f ./wcat