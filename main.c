#include <stdlib.h>
#include <stdio.h>
#include "header.h"

struct node{
  int i;
  struct node * next;
};

int main(){
  printf("Printing Empty List:\n");
  print_list(NULL);
  struct node* start = insert_front(NULL, 9);
  int i;
  for (i = 8; i >= 0; i--){
    start = insert_front(start, i);
  }
  print_list(start);
  printf("Freeing Values...\n");
  start = free_list(start);
  print_list(start);
  return 0;
}
