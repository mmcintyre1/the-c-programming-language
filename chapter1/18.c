#include <stdio.h>
#define MAXLINE 1000

int main() {
  int c, len, con_ws;
  char line[MAXLINE];

  len = 0;
  con_ws = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      printf("consecutive ending whitespace: %d\nactual chars: %d\n", con_ws, len);
      // exclude lines with empty space
      if (!(con_ws == len)) {
        for (int i = 0; i < (len - con_ws); i++) {
          putchar(line[i]);
        }
        putchar('\n');
      }
      con_ws = 0;
      len = 0;
    }
    else {
      if (c == ' ' || c == '\t') {
        ++con_ws;
      }
      else {
        con_ws = 0;
      }
      line[len] = c;
      ++len;
    }
  }

  return 0;
}
