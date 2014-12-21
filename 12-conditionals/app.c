#include <stdio.h>

int main( int argc, char *argv[] ) {
  int i = 0;

  if (argc == 2 ){
    printf("You only have one arg. \n");
  } else if( argc == 3 ){
    printf("Here’s your two args:\n");
    for( i = 1; i < argc; i++ ){
      printf("%s\n", argv[i]);
    }
  }
}
