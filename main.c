#include <stdlib.h>
#include <stdio.h>
#include "header.h"

struct node{
  int i;
  struct node * next;
};

int mn(){
  printf("Printing Empty List:\n[  ]");
  //print adding stuff
  struct node * start = insert_front(malloc(sizeof(struct node)), 9);
  int i;
  for (i = 8; i > 0; i--){
    start = insert_front(start, i);
  }
  print_list(start);
  printf("Freeing Values...");
  free_list(start);
  return 0;
}
