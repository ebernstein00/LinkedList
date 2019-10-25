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
  printf("Adding Nodes 0-9...\n")
  struct node* start;
  int i;
  for (i = 9; i >= 0; i--){
    start = insert_front(start, i);
  }
  printf("Printing List:\n");
  print_list(start);
  printf("Freeing Value 4...\n");
  remove_node(start, 4);
  printf("Freeing Value 5...\n");
  remove_node(start, 5);
  printf("Printing List:\n");
  print_list(start);
  printf("Freeing Remaining Values...\n");
  start = free_list(start);
  printf("Printing List:\n");
  print_list(start);
  return 0;
}
