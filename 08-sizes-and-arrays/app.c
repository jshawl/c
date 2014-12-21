#include <stdio.h>

int main(int argc, char *argv[]) {
  int areas[] = {10, 12, 13, 14, 20};
  char name[] = "Zed A. Shaw";
  char full_name[] = {
    'Z', 'e', 'd',
    ' ', 'A', '.', ' ',
    'S', 'h', 'a', 'w', '\0'
  };

  printf("The size of an int: %ld\n", sizeof(int));
  printf("The size of areas: %ld \n", sizeof(areas) / sizeof(int));
  printf("The size of name: %ld \n", sizeof(name) / sizeof(char));
  printf("The size of full_name[]: %ld \n", sizeof(full_name) / sizeof(char));
}
