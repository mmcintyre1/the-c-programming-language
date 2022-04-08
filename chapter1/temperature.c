#include <stdio.h>

main() {
  for (int fahr = 300;fahr >= 0;fahr -= 20) {
    float celsius = 5.0 * (fahr - 32) / 9.0;
    printf("%d\t%6.2f\n", fahr, celsius);
  }
}
