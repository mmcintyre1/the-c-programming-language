#include <stdio.h>
#define TABSPACE 8


int main() {
  int c, cur_chars, tab_fill;
  cur_chars = 0;

  while ((c = getchar()) != EOF) {
    if (!(c == '\t')) {
      if (c == '\n') {
        cur_chars = 0;
      }
      else {
        ++cur_chars;
      }
      putchar(c);
    }

    else {
      tab_fill = TABSPACE - (cur_chars % TABSPACE);
      for (int i = 0; i < tab_fill; i++) {
        putchar('#');
        ++cur_chars;
      }
    }

  }
  return 0;
}
