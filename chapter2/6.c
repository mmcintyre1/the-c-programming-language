#include <stdio.h>

void asbits(unsigned x, size_t s, int nl);
unsigned setbits(int x, int p, int n, int y);
unsigned getbits(unsigned x, int p, int n);

int main() {
  int off = 27;
  int len = 7;
  unsigned x = 0x12345678;  // 0001 0010 0011 0100 0101 0110 0111 1000
  unsigned y = 0XffffffFF;  // 1111 1111 1111 1111 1111 1111 1111 1111

  printf("off: %u  len: %u\n", off, len);
  asbits(x, sizeof(x), 1);
  asbits(y, sizeof(y), 1);
  asbits(setbits(x, off, len, y), sizeof(x), 1);
  printf("%08x %08x %08x\n", x, y, setbits(x, off, len, y));
  return 0;
}

void asbits(unsigned x, size_t s, int nl)
{
  int i;

  for (i = s * 8 - 1; i >= 0; i--) {
    getbits(x, i, 1) ? putchar('1') : putchar('0');
    if (!(i % 4)) putchar(' ');
  }
  if (nl) putchar('\n');
}

unsigned getbits(unsigned x, int p, int n)
{
  return (x >> (p + 1 - n) & ~(~0 << n));
}

unsigned setbits(int x, int p, int n, int y) {
  unsigned msk = ~(~0 << n);
  return (x & ~(msk << p + 1 - n)) | ((y & msk) << p + 1 - n);
}
