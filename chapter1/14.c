#include <stdio.h>
#include <ctype.h> // ispace


int main() {
  int c;
  int char_counts[256] = { 0 };

  printf("Enter words, then when you're done, press ctrl + d to print the histogram:\n");

  // count characters
  while ((c = getchar()) != EOF) {
    if (!isspace(c)) {
      char_counts[c]++;
    }
  }

  //print the histogram
  for (int i = 1; i < 256; ++i) {
    if (char_counts[i] > 0) {
      printf("[%c]", i);
      for (int j = 0; j < char_counts[i]; ++j) {
        printf("*");
      }
      printf("\n");
    }
  }

  return 0;
}
