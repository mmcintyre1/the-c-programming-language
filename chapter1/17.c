#include <stdio.h>
#define MAXLINE 1000

int main() {
  int c, len;
  char line[MAXLINE];

  len = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      if (len > 80) {
        for (int i = 0; i < len; i++) {
          putchar(line[i]);
        }
        putchar('\n');
      }
      len = 0;
    }
    else {
      line[len] = c;
      ++len;
    }
  }

  return 0;
}
