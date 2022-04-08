#include <stdio.h>
#include <ctype.h>

main() {
  int c, prevchar;
  prevchar = 0;
  while ((c = getchar()) != EOF) {
    if (!(isblank(c) && isblank(prevchar))) {
      putchar(c);
      prevchar = c;
    }
  }
}
