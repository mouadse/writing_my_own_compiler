#include <stdio.h>
#include <stdlib.h>


int main(int argc, const char *argv[]) {
  char *str = (char *)argv[1];
  printf("move a0, %ld\n", strtol(str, &str, 10));
  while (*str != '\0') {
    if (*str == '+') {
      printf("add a0, %ld\n", strtol(str + 1, &str, 10));
    } else if (*str == '-') {
      printf("sub a0, %ld\n", strtol(str + 1, &str, 10));
    } else if (*str == '*') {
      printf("mul a0, %ld\n", strtol(str + 1, &str, 10));
    } else if (*str == '/') {
      printf("div a0, %ld\n", strtol(str + 1, &str, 10));
    }
  }
  printf("error\n");
  return (EXIT_SUCCESS);
}
