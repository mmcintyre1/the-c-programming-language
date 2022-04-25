#include <stdio.h>


int main() {
  int c, prev_char, in_comment;
  in_comment = 0;
  prev_char = 0;

  while ((c = getchar()) != EOF) {
    if (!in_comment) {
      /* check if we are starting a comment and set boolean*/
      if (c == '*' && prev_char == '/') {
        in_comment = 1;
      }

      /* otherwise, print the character */
      else {
        putchar(c);
      }
    }

    else {
      /* check if we are ending a comment and set boolean */
      if (c == '/' && prev_char == '*') {
        in_comment = 0;
      }
    }
    prev_char = c;
  }
  return 0;
}
