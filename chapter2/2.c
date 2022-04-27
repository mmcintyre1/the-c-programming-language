#include <stdio.h>
#include <limits.h>

#define MAXLINE 100


int main() {
  int c, i, lim;
  int s[MAXLINE];
  lim = MAXLINE;

  // for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
  //   s[i] = c;
  // }

  for (i = 0; i < lim - 1; ++i) {
    c = getchar();
    if (c == EOF) break;
    if (c == '\n') break;
    s[i] = c;
  }


  for (i = 0; i < lim - 1; ++i) {
    printf("%c", s[i]);
  }

  return 0;
}
