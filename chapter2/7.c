#include <stdio.h>

void printbits(unsigned x, size_t s, int nl);
unsigned getbits(unsigned x, int p, int n);
unsigned invert(unsigned x, int p, int n);

int main() {
  return 0;
}

void printbits(unsigned x, size_t s, int nl)
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

unsigned invert(unsigned x, int p, int n) {

}
