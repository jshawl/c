#include <stdio.h>

void fizzbuzz(){
  int i = 0;
  for( i = 1; i < 25; i++ ){
    if( i % 3 == 0 && i % 5 == 0 ){
      printf("fizzbuzz\n");
    } else if ( i % 3 == 0 ){
      printf("fizz\n");
    } else if ( i % 5 == 0 ){
      printf("buzz\n");
    } else {
      printf("%d\n", i);
    }
  }
}

int main( int argc, char *argv[] ) {
  fizzbuzz();
  return 0;
}
