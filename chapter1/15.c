#include <stdio.h>

static float fahr_to_celsius(int fahr) {
  return (5.0 * (fahr - 32.0) / 9.0);
}

int main() {
  for (int fahr = 300;fahr >= 0;fahr -= 20) {
    printf("%d\t%6.2f\n", fahr, fahr_to_celsius(fahr));
  }
  return 0;
}
