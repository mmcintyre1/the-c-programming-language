#include <stdio.h>

void squeeze(char original[], char exclude[]);

int main() {

  char s[] = "abcded";
  char exclude[] = "abc";
  squeeze(s, exclude);
  printf("%s\n", s);
  return 0;
}

void squeeze(char original[], char exclude[]) {
  int i, j, k;

  for (i = j = 0; original[i] != '\0'; i++) {
    for (k = 0; exclude[k] != '\0'; k++) {
      if (original[i] == exclude[k]) {
        break;
      }
    }
    // only replace letters that are not in exclude
    if (exclude[k] == '\0') {
      original[j++] = original[i];
    }
  }
  original[j] = '\0';
}
