#include <stdio.h>

int htoi(char s[]);

int main() {

  char s[] = "0XfF34";
  printf("%d\n", htoi(s));

  return 0;
}

int htoi(char s[]) {
  int i, accum;

  if (s[0] == 0 && s[1] == 'x') i = 0;
  else i = 2;

  accum = 0;

  for (; s[i] != '\0'; ++i) {
    if (s[i] >= '0' && s[i] <= '9') {
      accum = accum * 16 + s[i] - '0';
    }
    else if (s[i] >= 'a' && s[i] <= 'f') {
      accum = accum * 16 + s[i] - 'a' + 10;
    }
    else if (s[i] >= 'A' && s[i] <= 'F') {
      accum = accum * 16 + s[i] - 'A' + 10;
    }
    else {
      break;
    }

  }

  return accum;
}
