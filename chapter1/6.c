#include <stdio.h>

main() {
  int c;
  while (c = getchar() != EOF) {
    printf("%d\n", c);
    return 0;
  }
}
