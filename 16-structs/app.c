#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {
  char *name;
  int age;
  int height;
  int weight;
};

struct Person *Person_create( char *name, int age, int height, int weight){
  struct Person *who = malloc( sizeof( struct Person ) );
  assert( who != NULL );
  who->name = strdup( name );
  who->age = age;
  who->height = height;
  who->weight = weight;
  return who;
}

void Person_destroy( struct Person *who ){
  assert( who != NULL );
  free( who );
}

void Person_print( struct Person *who ){
  printf("Name: %s\n", who->name );
  printf("Age: %d\n", who->age );
  printf("Height: %d\n", who->height );
  printf("Weight: %d\n", who->weight );
}

int main( int argc, char *argv[] ){
  struct Person *joe = Person_create(
    "Joe Shmoe", 25, 64, 180
  );
  printf("Joe is at memory location %p\n", joe);
  Person_print( joe );
  joe->age += 20;
  joe->height += 3;
  joe->weight -= 20;
  joe->name = "Joseph";
  Person_destroy( joe );
  return 0;
}
