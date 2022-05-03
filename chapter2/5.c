#include <stdio.h>

int any(char s1[], char s2[]);

int main() {
  char s1[] = "abcded";
  char s2[] = "xfgd";

  int c = any(s1, s2);
  printf("The strings '%s' and '%s' have a match at position: %d\n", s1, s2, c);

  return 0;
}


int any(char s1[], char s2[]) {
  int i, j;

  for (i = 0; s1[i] != '\0'; i++) {
    for (j = 0; s2[j] != '\0'; j++) {
      if (s1[i] == s2[j]) {
        return i;
      }
    }
  }
  return -1;
}
