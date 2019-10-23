#include <stdlib.h>
#include <stdio.h>

struct node{
  int i;
  struct node* next;
};

void print_list(struct node* node){
  printf("Printing List:\n[ ");
  while(node->next != NULL){
    printf("%d ", node->i);
  }
}

struct node * insert_front(struct node* node, int x){
  struct node front;
  front->i = x;
  front->next = node;
  struct node* ptr = &front;
  return ptr;
}

struct node * free_list(struct node* node){
  struct node* ph = node->next;
  free(node);
  free_list(ph);
}
