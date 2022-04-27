#include <stdio.h>
#include <limits.h>


int main() {
  /* char */
  printf("The range of a signed char is %d to %d\n", SCHAR_MIN, SCHAR_MAX);
  printf("The range of an unsigned char is %d to %d\n", 0, UCHAR_MAX);

  /* short */
  printf("The range of a signed short is %d to %d\n", SHRT_MIN, SHRT_MAX);
  printf("The range of an unsigned short is %d to %d\n", 0, USHRT_MAX);

  /* int */
  printf("The range of a signed int is %d to %d\n", INT_MIN, INT_MAX);
  printf("The range of an unsigned int is %d to %u\n", 0, UINT_MAX);

  /* long */
  printf("The range of a signed long is %ld to %ld\n", LONG_MIN, LONG_MAX);
  printf("The range of an unsigned long is %d to %lu\n", 0, ULONG_MAX);

  return 0;
}
