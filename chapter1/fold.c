#include <stdio.h>
#define FOLDCOUNT 8

int main() {
  int c, counter;
  counter = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      counter = 0;
      putchar(c);
    }
    else {
      if (counter > FOLDCOUNT) {
        putchar('\n');
        counter = 0;
      }
      else {
        putchar(c);
        ++counter;
      }
    }

  }
  return 0;
}
