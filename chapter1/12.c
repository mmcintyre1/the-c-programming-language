#include <stdio.h>
#include <ctype.h> // ispace


main() {
  int c, last_char;
  last_char = 0;

  while ((c = getchar()) != EOF) {
    if (isspace(c)) {
      // don't print newline if previous character is a space
      // which prevents multiple newlines
      if (!isspace(last_char)) {
        putchar('\n');
      }
    }
    else {
      putchar(c);
    }
    last_char = c;
  }
}
