#include <stdio.h>
#include <stdlib.h>

struct Block {
  int i;
  int* ia;
  char* s;
  char** sa;
  char c;
  char* ca;
  struct Block *blk_ptr;
  struct Block **blk_ptr_arr;
};

void initialize(struct Block *b) {
  b->ia = malloc(100 * sizeof(int));
  b->sa = malloc(100 * sizeof(char*));
  b->ca = malloc(100 * sizeof(char));
  b->blk_ptr = NULL;
  b->blk_ptr_arr = NULL;
}

int main(int argc, char **argv) {
  int i;
  struct Block *d;
  for (i = 0; i < 100 * 100; i++) {
    d = malloc(sizeof(struct Block));
    initialize(d);
    printf("%d\n", i);
  }
  printf("success\n");
  return 0;
}
