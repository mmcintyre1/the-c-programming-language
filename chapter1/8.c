#include <stdio.h>
/* counts and prints tabs, spaces, and newlines
until EOF character (typically ctrl +d) is reached */
int main() {
  int c, newlines, tabs, spaces;
  newlines = tabs = spaces = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      newlines++;
    }
    else if (c == '\t') {
      tabs++;
    }
    else if (c == ' ') {
      spaces++;
    }
  }

  printf("newlines: %d\n", newlines);
  printf("tabs: %d\n", tabs);
  printf("spaces: %d\n", spaces);
}
