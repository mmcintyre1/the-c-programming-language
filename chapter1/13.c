#include <stdio.h>
#include <ctype.h> // ispace

#define MAXLENGTH 15


int main() {
  int c, current_word_length;
  int word_lengths[MAXLENGTH] = { 0 };
  current_word_length = 0;

  printf("Enter words, then when you're done, press ctrl + d to print the histogram:\n");

  // count characters
  while ((c = getchar()) != EOF) {
    if (isspace(c) && current_word_length > 0) {
      word_lengths[current_word_length]++;
      current_word_length = 0;
    }
    // exclude consecutive spaces from counting
    else if (!isspace(c)) {
      current_word_length++;
    }
  }

  // print the histogram
  for (int i = 1; i < MAXLENGTH; ++i) {
    printf("[%2d]", i);
    for (int j = 0; j < word_lengths[i]; ++j) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
