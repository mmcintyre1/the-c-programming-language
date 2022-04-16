#include <stdio.h>
#define MAXLINE 1000

void reverse(char s[], int len);

int main() {
  int c, len;
  char line[MAXLINE];

  len = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      reverse(line, len);
      len = 0;
    }
    else {
      line[len] = c;
      ++len;
    }
  }
  return 0;
}

void reverse(char s[], int len) {
  for (int i = len; i >= 0; --i) {
    putchar(s[i - 1]);
  }
  putchar('\n');
}
